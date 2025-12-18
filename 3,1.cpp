#include <iostream>
using namespace std;

void compute_gcd_lcm(int m, int n, int &gcd, int &lcm){
	int a = m, b = n;
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	gcd = a;
	lcm = (m * n) / gcd;
}

int main() {
	int m, n;

	cout << "请输入两个自然数m和n：";
	cin >> m >> n;

	if (m <= 0 || n <= 0) {
		cout << "请输入正整数！" << endl;
		return 1;
	}

	int gcd=0, lcm=0;
	compute_gcd_lcm(m, n, gcd, lcm);

	cout << "最大公约数为：" << gcd << endl;
	cout << "最小公倍数为：" << lcm << endl;

	return 0;
	}

