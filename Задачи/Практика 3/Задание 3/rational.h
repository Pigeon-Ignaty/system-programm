#include <iostream>
using namespace std;
class rational {
	int a, b;
public:
	rational(int a1, int b1);
	void set(int a1, int b1);
	void show();
	rational operator+(const rational& other) {
		double A = this->a * other.b + this->b * other.a;
		double B = this->b * other.b;
		cout << A << "/" << B << endl;
		return rational(A, B);
	}
	friend rational operator-(const rational& o1, const rational& o2);
	rational& operator++();
	bool operator==(const rational& o1);
	bool operator>(const rational& o1);
	void operator=(const rational& o1);

	//rational& rational::operator++(int)
};

