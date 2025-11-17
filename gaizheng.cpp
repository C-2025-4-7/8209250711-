#include<iostream>
using namespace std;
int main()
{
    int k = 0;          // 先定义k并赋值
    int i = k + 1;
    cout << i++ << endl;

    int j = 1;          // 改用不同的变量名
    cout << j++ << endl;
    cout << "Welcome to C++!" << endl;
    return 0;
}