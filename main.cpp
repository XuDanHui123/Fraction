#include<iostream>
#include<string>
#include<Windows.h>
#include"Fraction.h"
using namespace std;

int main() {
	SetConsoleTitleA("分数运算 许丹汇 2022.12.18");
	cout << "输入样例 1/3 4/5 (分别表示三分之一和五分之四)" << endl;
	while (1) {
		int a = 0, b = 0, c = 0, d = 0;
		in:
		cout << "输入:";
		scanf_s("%d/%d %d/%d", &a, &b, &c, &d);
		if (b == 0 || d == 0) {
			cout << "分母不得为0" << endl;
			goto in;
		}
		cout << endl;
		Fraction R1(a, b);
		Fraction R2(c, d);
		Fraction Add = R1 + R2;
		cout << "相加:" << Add << endl;
		Fraction Sub = R1 - R2;
		cout << "相减:" << Sub << endl;
		Fraction cheng = R1 * R2;
		cout << "相乘:" << cheng << endl;
		Fraction chu = R1 / R2;
		cout << "相除:" << chu << endl;
		cout << "--------------------------" << endl;
	}
	return 0;
}