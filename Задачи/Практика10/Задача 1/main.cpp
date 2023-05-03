#include <iostream>
#include <vector>
using namespace std;

template<typename  T1, typename  T2>
void Myswap(T1& a, T2& b) {
	T1 temp(a);
	a = static_cast<T1>(b);
	b = static_cast<T1>(temp);
}

//template<typename  T1, typename  T2, typename  T3 >
//void Myswap1(T1& a, T2& b, T2& с) {
//	T1 temp(a);
//	a = static_cast<T1>(b);
//	b = static_cast<T1>(с);
//	с = static_cast<T1>(с);
//}
class MyClass {
	int a;
	double b;
	string c;
public:
	MyClass(int a, double b, string c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	void get() {
		cout << "a1: " << a << endl;
		cout << "b1: " << b << endl;
		cout << "c1: " << c << endl;

	}
};

int main() {
    setlocale(LC_ALL, "RUS");
	int a = 9;
	int b = 54;
	Myswap(b, a);
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	float c = 54.434234234;
	float d = 44.4329893012;
	Myswap(c, d);
	cout << "c: " << c << endl;
	cout << "d: " << d << endl;
	string e = "sas";
	string f = "info";
	Myswap(e, f);

	cout << "e: " << e << endl;
	cout << "f: " << f << endl;

	MyClass o1(1, 3.8, "dsds");
	MyClass o2(4, 365.7, "fdfsd");
	Myswap(o1, o2);
	o1.get();
	o2.get();
    return 0;
}