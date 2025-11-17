#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;
    if (a >= 'a' && a <= 'z')
    {
        cout << (char)(a - 32);
    }
    else
        cout << a + 1;
    return 0;
}