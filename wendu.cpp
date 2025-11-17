#include <iostream>
#include <iomanip>  // 用于设置输出格式

using namespace std;

int main() {
    double fahrenheit, celsius;

    // 输入华氏温度
    cout << "请输入华氏温度: ";
    cin >> fahrenheit;

    // 转换为摄氏温度：C = (F - 32) × 5/9
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // 输出结果，保留两位小数
    cout << fixed << setprecision(2);
    cout << "华氏温度 " << fahrenheit << "°F 转换为摄氏温度是: " << celsius << "°C" << endl;

    return 0;
}