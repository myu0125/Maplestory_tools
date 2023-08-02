#include <bits/stdc++.h>
using namespace std;

int statistic[10];
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<int> dis(0,99);

void test()
{
    int MAIN_STAT = 0;
    int SOL_ERDA = 0;

    for(int i=0;i<20;i++)
    {
        int r = dis(gen);
        if(MAIN_STAT <= 2)
        {
            if(r < 35)
                MAIN_STAT++;
            SOL_ERDA += 10;
        }
        else if(MAIN_STAT <= 6)
        {
            if(r < 20)
                MAIN_STAT++;
            SOL_ERDA += 20;
        }
        else if(MAIN_STAT == 7)
        {
            if(r < 15)
                MAIN_STAT++;
            SOL_ERDA += 30;
        }
        else if(MAIN_STAT == 8)
        {
            if(r < 10)
                MAIN_STAT++;
            SOL_ERDA += 30;
        }
        else if(MAIN_STAT == 9)
        {
            if(r < 5)
                MAIN_STAT++;
            SOL_ERDA += 50;
        }
    }

    statistic[MAIN_STAT]++;

    //cout << "메인 스탯 " << MAIN_STAT << " 레벨 " << "솔 에르다 조각 " << SOL_ERDA << " 개 소모" << "\n";
}

int main()
{
    int N;
    cin >> N;

    for(int i=0;i<N;i++)
        test();

    for(int i=0;i<=10;i++)
        cout << statistic[i] << "\n";

    return 0;
}
