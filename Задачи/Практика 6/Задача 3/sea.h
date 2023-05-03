#include "gulf.h"

class Sea : public Gulf {
protected:
	double salinity;
public:
	Sea();
	Sea(string Name, string Location, double Square, double Depth, double Temperature, double Salinity);
	friend ostream& operator<<(ostream& os, const Sea& ob);
	friend istream& operator>>(istream& is, Sea& ob);
};