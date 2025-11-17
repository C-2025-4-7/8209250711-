#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned int testUnint = 65534;                                           // oxfffe
    cout << "output in char type:" << static_cast<char>(testUnint) << endl;   // 无法转化
    cout << "output in short type:" << static_cast<short>(testUnint) << endl; // 数据溢出
    cout << "output in int type:" << static_cast<int>(testUnint) << endl;
    cout << "output in double type:" << static_cast<double>(testUnint) << endl;
    cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl; // 科学计数法
    cout << "output in Oct unsigned int type:" << oct << testUnint << endl;                        // 8进制输出
    cout << "output in Hex unsigned int type:" << hex << testUnint << endl;                        // 16进制输出
    system("pause");
    return 0;
}