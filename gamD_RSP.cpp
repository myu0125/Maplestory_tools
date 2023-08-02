#include <iostream>
#include <time.h>

using namespace std;

char* RSP(int R, int S, int P)
{
    srand(time(NULL));
    int r = rand() % 3; // ���� ���� �� �� ������ ����

    if(R == S && S == P) // ������ Ƚ���� ��� ���� ���
    {
        if(r == 0)
            return "����";
        else if(r == 1)
            return "���ڱ�";
        else
            return "����";

    }
    if(R >= S && R >= P) // ������ ���� ���� ���
    {
        if(S >= P)
            return "����";
        else
            return "����";
    }
    else if(S >= R && S >= P) // ������ ���� ���� ���
    {
        if(P >= R)
            return "���ڱ�";
        else
            return "����";
    }
    else if(P >= R && P >= S) // ���ڱⰡ ���� ���� ���
    {
        if(R >= S)
            return "����";
        else
            return "���ڱ�";
    }
}

int main(){
    int R = 0;
    int S = 0;
    int P = 0;
    char input;

    //ù ���带 �����ϰ� �� 8�� �Է¹޾� ��� ����� ���
    for(int i = 0; i < 8; i++)
    {
        cin >> input;

        if(input == 'r' || input == 'R')
            R++;
        else if(input == 's' || input == 'S')
            S++;
        else if(input == 'p' || input == 'P')
            P++;
        else
        {
            cout << "����  :  r or R" << endl << "����  :  s or S" << endl << "���ڱ�:  p or P" << "\n" << "********************" << endl;
            i--;
            continue;
        }

        cout << "��õ  :  " << RSP(R, S, P) << "\n" << "*******************" << endl;
    }
}

