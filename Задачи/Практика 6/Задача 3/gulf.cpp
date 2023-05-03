#include "gulf.h"
#include <iostream>
#include <cmath>
#include <sstream>
const double pi = 3.14159265;

using namespace std;

Gulf::Gulf() {
	name = "";
	location = "";
	square = depth = avg_temperature = 0;
}

Gulf::Gulf(string Name, string Location, double Square, double Depth, double Temperature) {
	name = Name;
	location = Location;
	square = Square;
	depth = Depth;
	avg_temperature = Temperature;
}
ostream& operator<<(ostream& os, const Gulf& ob) {
	setlocale(LC_ALL, "RUS");

	os << "��������: " << ob.name << endl;
	os << "����������: " << ob.location << endl;
	os << "�������: " << ob.square << endl;
	os << "�������: " << ob.depth << endl;
	os << "�����������: " << ob.avg_temperature << endl;
	return os;
}

istream& operator>>(istream& is, Gulf& ob) {
	setlocale(LC_ALL, "RUS");

	cout << "������� ��������" << endl;
	is >> ob.name;
	cout << "������� ����������" << endl;
	is >> ob.location;
	cout << "������� �������" << endl;
	is >> ob.square;
	cout << "������� �������" << endl;
	is >> ob.depth;
	cout << "������� �����������" << endl;
	is >> ob.avg_temperature;

	return is;

}