#include <iostream>
using namespace std;

int main()
{
    // 初始化计数器
    int letters = 0; // 英文字母计数
    int spaces = 0;  // 空格计数
    int digits = 0;  // 数字计数
    int others = 0;  // 其他字符计数
    char c;          // 存储当前读取的字符

    cout << "请输入一行字符：" << endl;

    // 循环读取字符，直到遇到换行符'\n'为止
    while ((c = cin.get()) != '\n')
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            // 判断是否为英文字母
            letters++;
        }
        else if (c == ' ')
        {
            // 判断是否为空格
            spaces++;
        }
        else if (c >= '0' && c <= '9')
        {
            // 判断是否为数字
            digits++;
        }
        else
        {
            // 其他字符
            others++;
        }
    }

    // 输出统计结果
    cout << "英文字母：" << letters << "个" << endl;
    cout << "空格：" << spaces << "个" << endl;
    cout << "数字：" << digits << "个" << endl;
    cout << "其他字符：" << others << "个" << endl;

    return 0;
}