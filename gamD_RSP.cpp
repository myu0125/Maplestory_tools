#include <iostream>
#include <time.h>

using namespace std;

char* RSP(int R, int S, int P)
{
    srand(time(NULL));
    int r = rand() % 3; // 가위 바위 보 중 랜덤값 결정

    if(R == S && S == P) // 등장한 횟수가 모두 같은 경우
    {
        if(r == 0)
            return "바위";
        else if(r == 1)
            return "보자기";
        else
            return "가위";

    }
    if(R >= S && R >= P) // 바위가 가장 많은 경우
    {
        if(S >= P)
            return "가위";
        else
            return "바위";
    }
    else if(S >= R && S >= P) // 가위가 가장 많은 경우
    {
        if(P >= R)
            return "보자기";
        else
            return "가위";
    }
    else if(P >= R && P >= S) // 보자기가 가장 많은 경우
    {
        if(R >= S)
            return "바위";
        else
            return "보자기";
    }
}

int main(){
    int R = 0;
    int S = 0;
    int P = 0;
    char input;

    //첫 라운드를 제외하고 총 8번 입력받아 계산 결과를 출력
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
            cout << "바위  :  r or R" << endl << "가위  :  s or S" << endl << "보자기:  p or P" << "\n" << "********************" << endl;
            i--;
            continue;
        }

        cout << "추천  :  " << RSP(R, S, P) << "\n" << "*******************" << endl;
    }
}

