#include "ocean.h"
#include <iostream>
using namespace std;
Ocean::Ocean() {
	name = "";
	location = "";
	continents = "";
	minerals = "";
	square = depth = avg_temperature = salinity = pollution = 0;
}

Ocean::Ocean(string Name, string Location, double Square, double Depth, double Temperature, double Salinity,string Continents, string Minerals, int Pollution) {
	name = Name;
	location = Location;
	square = Square;
	depth = Depth;
	continents = Continents;
	minerals = Minerals;
	pollution = Pollution;
	avg_temperature = Temperature;
	salinity = Salinity;
}

ostream& operator<<(ostream& os, const Ocean& ob) {
	setlocale(LC_ALL, "RUS");

	os << "��������: " << ob.name << endl;
	os << "����������: " << ob.location << endl;
	os << "�������: " << ob.square << endl;
	os << "�������: " << ob.depth << endl;
	os << "�����������: " << ob.avg_temperature << endl;
	os << "��������: " << ob.salinity << endl;
	os << "����������: " << ob.continents << endl;
	os << "�������� ����������: " << ob.minerals << endl;
	os << "�����������: " << ob.pollution << endl;

	return os;
}

istream& operator>>(istream& is, Ocean& ob) {
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
	cout << "������� ����������" << endl;
	is >> ob.continents;
	cout << "������� �������� ����������" << endl;
	is >> ob.minerals;
	cout << "�����������" << endl;
	is >> ob.pollution;
	return is;

}