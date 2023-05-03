#include "sea.h"

class Ocean : public Sea {
protected:
	string continents, minerals;
	int pollution;
public:
	Ocean();
	Ocean(string Name, string Location, double Square, double Depth, double Temperature, double Salinity, string,string,int);
	friend ostream& operator<<(ostream& os, const Ocean& ob);
	friend istream& operator>>(istream& is, Ocean& ob);
};