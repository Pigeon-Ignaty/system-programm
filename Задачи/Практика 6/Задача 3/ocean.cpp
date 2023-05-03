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

	os << "Название: " << ob.name << endl;
	os << "Координаты: " << ob.location << endl;
	os << "Площадь: " << ob.square << endl;
	os << "Глубина: " << ob.depth << endl;
	os << "Температура: " << ob.avg_temperature << endl;
	os << "Солёность: " << ob.salinity << endl;
	os << "Континенты: " << ob.continents << endl;
	os << "Полезные ископаемые: " << ob.minerals << endl;
	os << "Загрязнение: " << ob.pollution << endl;

	return os;
}

istream& operator>>(istream& is, Ocean& ob) {
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
	cout << "Введите континенты" << endl;
	is >> ob.continents;
	cout << "Введите полезные ископаемые" << endl;
	is >> ob.minerals;
	cout << "Загрязнение" << endl;
	is >> ob.pollution;
	return is;

}