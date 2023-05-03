#include <iostream>
#include <string>
using namespace std;

class Gulf {
protected:
	string name, location;
	double depth, avg_temperature;
	unsigned unsigned  square;
public:
	Gulf();
	Gulf(string Name, string Location, double Square, double Depth, double Temperature);
	friend ostream& operator<<(ostream& os, const Gulf& ob);
	friend istream& operator>>(istream& is, Gulf& ob);
};
