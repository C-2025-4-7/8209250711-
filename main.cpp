#include <iostream>
#include <iomanip>
#include "mytriangle.h"

using namespace std;

int main() {
    double side1, side2, side3;
    
    // 输入三角形三边长
    cout << "请输入三角形的三条边长：" << endl;
    cout << "第一条边长：";
    cin >> side1;
    cout << "第二条边长：";
    cin >> side2;
    cout << "第三条边长：";
    cin >> side3;
    
    // 验证输入是否合法并计算面积
    if (is_valid(side1, side2, side3)) {
        double triangle_area = area(side1, side2, side3);
        cout << "输入合法，可以构成三角形。" << endl;
        cout << fixed << setprecision(4);
        cout << "三角形的面积为：" << triangle_area << endl;
    } else {
        cout << "输入错误！这三条边不能构成一个三角形。" << endl;
        cout << "可能原因：" << endl;
        cout << "1. 边长必须是正数" << endl;
        cout << "2. 必须满足任意两边之和大于第三边" << endl;
    }
    
    return 0;
}