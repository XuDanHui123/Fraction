#pragma once
#include<iostream>
using namespace std;
class Fraction {
public:
	friend ostream& operator<<(ostream& cout, Fraction& R1);
	Fraction() {}
	Fraction(int a, int b) {
		this->fenzi = a;
		this->fenmu = b;
	}
	~Fraction() {}
	Fraction operator + (const Fraction& R1);
	Fraction operator - (const Fraction& R1);
	Fraction operator * (const Fraction& R1);
	Fraction operator / (const Fraction& R1);
private:
	int fenzi;
	int fenmu;
	Fraction yuefen(Fraction R1);
	int gcd(int a, int b);
	int lcm(int a, int b);
};