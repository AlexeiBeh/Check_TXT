#include <iostream>
#include <string>
using namespace std;


void IsKPeriodic(string& txt, int k)
{
   // Выделяем часть строки кратную К
    string partK = txt.substr(0,k);

    int i = 0;
    bool cheak = false;

    while (i < txt.size())
    {
        // Выделяем часть введеной строки
        string partOfTxt = txt.substr(i, k);

        
        // Проверяем
        if (partK == partOfTxt)
        {
            i += k;
            cheak = true;
        }
        else
        {
            cheak = false;
            break;
        }
        
    }

    if (cheak == true)
        cout << "Строка кратна введенному числу К" << endl;
    else if (cheak == false)
        cout << "Строка не кратна введенному числу К" << endl;
    
}


int main()
{
    setlocale(LC_ALL, "Russian");
    
    
    string txt;
    int k;

    cout << "Введите строку, которую необходимо проверить на кратность: " << endl; // ABCABCABC
    cin >> txt;

    cout << "Введите кратность строки (число К): " << endl;
    cin >> k;

    if (k > 0)
    {
        IsKPeriodic(txt, k);
    }
    else
        cout << "Число К должно быть больше 0!";
    return 0;
}