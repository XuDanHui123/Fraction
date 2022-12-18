#include "Fraction.h"
#include <iostream>
using namespace std;
ostream& operator<<(ostream& cout, Fraction& R1) {
	if (R1.fenzi == R1.fenmu) {
		std::cout << 1 << endl;
		return cout;
	}
	if (R1.fenzi == 0) {
		std::cout << 0 << endl;
		return cout;
	}
	std::cout << R1.fenzi << "/" << R1.fenmu << std::endl;
	return cout;
}
Fraction Fraction::operator + (const Fraction& R1) {
	int fenmu = lcm(this->fenmu, R1.fenmu);
	int fenzi = (this->fenzi) * (fenmu / this->fenmu) + (R1.fenzi) * (fenmu / R1.fenmu);
	Fraction sum(fenzi, fenmu);
	sum = yuefen(sum);
	return sum;
}
Fraction Fraction::operator - (const Fraction& R1) {
	int fenmu = lcm(this->fenmu, R1.fenmu);
	int fenzi = (this->fenzi) * (fenmu / this->fenmu) - (R1.fenzi) * (fenmu / R1.fenmu);
	Fraction sum(fenzi, fenmu);
	sum = yuefen(sum);
	return sum;
}
Fraction Fraction::operator * (const Fraction& R1) {
	Fraction sum(this->fenzi * R1.fenzi, this->fenmu * R1.fenmu);
	sum = yuefen(sum);
	return sum;
}
Fraction Fraction::operator / (const Fraction& R1) { return Fraction((*this) * (Fraction(R1.fenmu, R1.fenzi))); }
Fraction Fraction::yuefen(Fraction R1) {
	int m = R1.fenzi;
	int n = R1.fenmu;
	int x = gcd(m, n);
	R1.fenzi /= x;
	R1.fenmu /= x;
	return R1;
}
int Fraction::lcm(int a, int b) { return a / gcd(a, b) * b; }
int Fraction::gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

