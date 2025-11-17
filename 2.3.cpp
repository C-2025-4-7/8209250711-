#include<iostream>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    if (a < b + c && b < a + c && c < a + b)
    {
        cout << a + b + c << endl;
        if (a == b || b == c || a == c)
            cout << "Yes";
        else
            cout << "No";
    }
    else
    {
        cout << "No triangle";
    }
    return 0;
}
