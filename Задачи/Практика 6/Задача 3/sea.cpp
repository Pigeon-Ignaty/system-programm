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

	os << "Название: " << ob.name << endl;
	os << "Координаты: " << ob.location << endl;
	os << "Площадь: " << ob.square << endl;
	os << "Глубина: " << ob.depth << endl;
	os << "Температура: " << ob.avg_temperature << endl;
	os << "Солёность: " << ob.salinity << endl;
	return os;
}

istream& operator>>(istream& is, Sea& ob) {
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
	cout << "Введите солёность" << endl;
	is >> ob.salinity;
	return is;

}