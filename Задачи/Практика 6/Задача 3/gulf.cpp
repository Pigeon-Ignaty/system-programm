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

	os << "Название: " << ob.name << endl;
	os << "Координаты: " << ob.location << endl;
	os << "Площадь: " << ob.square << endl;
	os << "Глубина: " << ob.depth << endl;
	os << "Температура: " << ob.avg_temperature << endl;
	return os;
}

istream& operator>>(istream& is, Gulf& ob) {
	setlocale(LC_ALL, "RUS");

	cout << "Введите название" << endl;
	is >> ob.name;
	cout << "Введите координаты" << endl;
	is >> ob.location;
	cout << "Введите площадь" << endl;
	is >> ob.square;
	cout << "Введите глубину" << endl;
	is >> ob.depth;
	cout << "Введите температуру" << endl;
	is >> ob.avg_temperature;

	return is;

}