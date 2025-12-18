#include "mytriangle.h"
#include <cmath>

// 判断三条边是否能构成三角形
bool is_valid(double side1, double side2, double side3) {
    // 边长必须为正数
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        return false;
    }
    
    // 三角形两边之和大于第三边
    return (side1 + side2 > side3) &&
           (side1 + side3 > side2) &&
           (side2 + side3 > side1);
}

// 计算三角形面积（海伦公式）
double area(double side1, double side2, double side3) {
    // 首先验证是否能构成三角形
    if (!is_valid(side1, side2, side3)) {
        return 0.0; // 不能构成三角形则返回0
    }
    
    // 计算半周长
    double s = (side1 + side2 + side3) / 2.0;
    
    // 计算面积
    double area_value = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    
    return area_value;
}