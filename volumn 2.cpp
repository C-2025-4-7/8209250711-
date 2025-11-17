#include <iostream>
#include <cmath>
using namespace std;

// 使用标识符常量定义圆周率
const double PI = 3.141592653589793;

int main() {
    double radius, height, volume;

    // 输入圆锥的半径和高度
    cout << "请输入圆锥底的半径: ";
    cin >> radius;

    cout << "请输入圆锥的高度: ";
    cin >> height;

    // 计算圆锥体积：V = (1/3) * π * r² * h
    volume = (1.0 / 3.0) * PI * pow(radius, 2) * height;

    // 输出结果
    cout << "\n=== 圆锥体积计算结果 ===" << endl;
    cout << "底面半径: " << radius << " 单位" << endl;
    cout << "圆锥高度: " << height << " 单位" << endl;
    cout << "圆锥体积: " << volume << " 立方单位" << endl;

    return 0;
}
