#include<iostream>
#include<string>
#include<Windows.h>
#include"Fraction.h"
using namespace std;

int main() {
	SetConsoleTitleA("�������� ���� 2022.12.18");
	cout << "�������� 1/3 4/5 (�ֱ��ʾ����֮һ�����֮��)" << endl;
	while (1) {
		int a = 0, b = 0, c = 0, d = 0;
		in:
		cout << "����:";
		scanf_s("%d/%d %d/%d", &a, &b, &c, &d);
		if (b == 0 || d == 0) {
			cout << "��ĸ����Ϊ0" << endl;
			goto in;
		}
		cout << endl;
		Fraction R1(a, b);
		Fraction R2(c, d);
		Fraction Add = R1 + R2;
		cout << "���:" << Add << endl;
		Fraction Sub = R1 - R2;
		cout << "���:" << Sub << endl;
		Fraction cheng = R1 * R2;
		cout << "���:" << cheng << endl;
		Fraction chu = R1 / R2;
		cout << "���:" << chu << endl;
		cout << "--------------------------" << endl;
	}
	return 0;
}