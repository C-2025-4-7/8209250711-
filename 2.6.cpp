#include<iostream>
using namespace std;   

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return (b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    
    int ans = gcd(max(a,b), min(a,b));
    cout<<"最大公约数" << ans<<" "<<"最小公倍数"<<a*b/ans;
    return 0;
}