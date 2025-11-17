#include<iostream>
using namespace std;

int main()
{
    int n = 2;
    int day = 0;
    int sum = 0;
    while(1)
    { 
        sum += n;
        day++;
        if(n==64)
        {
            break;
        }
        n *= 2;
    }
    cout << float(sum * 0.8 / day);
    return 0;
}