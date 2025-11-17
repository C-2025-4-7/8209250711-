#include <iostream>
using namespace std;

int main()
{
    double num1, num2; // 使用double以支持浮点数运算
    char op;           // 存储运算符

    // 输入提示
    cout << "请输入表达式（格式：数字 运算符 数字，例如：3 + 5）：";
    cin >> num1 >> op >> num2;

    // 根据运算符进行计算
    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        // 处理除法除数为0的情况
        if (num2 == 0)
        {
            cout << "错误：除数不能为0！" << endl;
        }
        else
        {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        break;
    case '%':
        // 取模运算通常用于整数，这里做类型检查
        if (num2 == 0)
        {
            cout << "错误：取模运算的除数不能为0！" << endl;
        }
        else if (num1 != (int)num1 || num2 != (int)num2)
        {
            cout << "错误：取模运算仅适用于整数！" << endl;
        }
        else
        {
            cout << (int)num1 << " % " << (int)num2 << " = " << (int)num1 % (int)num2 << endl;
        }
        break;
    default:
        // 处理非法运算符
        cout << "错误：非法运算符！仅支持 +、-、*、/、%" << endl;
    }

    return 0;
}