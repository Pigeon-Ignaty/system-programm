#include "sea.h"
#include <iostream>

using namespace std;
Sea::Sea() {
	name = "";
	location = "";
	square = depth = avg_temperature = salinity = 0;
}

Sea::Sea(string Name, string Location, double Square, double Depth, double Temperature, double Salinity) {
	name = Name;
	location = Location;
	square = Square;
	depth = Depth;
	avg_temperature = Temperature;
	salinity = Salinity;
}

ostream& operator<<(ostream& os, const Sea& ob) {
	setlocale(LC_ALL, "RUS");

	os << "��������: " << ob.name << endl;
	os << "����������: " << ob.location << endl;
	os << "�������: " << ob.square << endl;
	os << "�������: " << ob.depth << endl;
	os << "�����������: " << ob.avg_temperature << endl;
	os << "��������: " << ob.salinity << endl;
	return os;
}

istream& operator>>(istream& is, Sea& ob) {
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
	cout << "������� ��������" << endl;
	is >> ob.salinity;
	return is;

}