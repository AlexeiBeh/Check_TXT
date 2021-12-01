#include <iostream>
#include <string>
using namespace std;


void IsKPeriodic(string& txt, int k)
{
   // �������� ����� ������ ������� �
    string partK = txt.substr(0,k);

    int i = 0;
    bool cheak = false;

    while (i < txt.size())
    {
        // �������� ����� �������� ������
        string partOfTxt = txt.substr(i, k);

        
        // ���������
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
        cout << "������ ������ ���������� ����� �" << endl;
    else if (cheak == false)
        cout << "������ �� ������ ���������� ����� �" << endl;
    
}


int main()
{
    setlocale(LC_ALL, "Russian");
    
    
    string txt;
    int k;

    cout << "������� ������, ������� ���������� ��������� �� ���������: " << endl; // ABCABCABC
    cin >> txt;

    cout << "������� ��������� ������ (����� �): " << endl;
    cin >> k;

    if (k > 0)
    {
        IsKPeriodic(txt, k);
    }
    else
        cout << "����� � ������ ���� ������ 0!";
    return 0;
}