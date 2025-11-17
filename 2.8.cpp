#include<iostream>
using namespace std;

int main()
{
    float a, x, y;
    cin >> a;
    if(a<0)
    {
        cout<<"error";
    }
    if(a==0)
    {
        cout<<"0";
    }
    if(a>0)
    {
        x = a;
        while (true)
        {
            y=(x+a/x)/2;
            
            if(abs(y-x)<0.00001)
            {
                break;
            }
            x = y;
        } 
        cout<<y; 
    }

    return 0;
}