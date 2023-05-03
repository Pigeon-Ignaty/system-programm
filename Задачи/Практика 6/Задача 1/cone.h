#include <iostream>
using namespace std;
class cone {
	int x, y, z, r, h, V, S;
public:
	cone();
	cone(int r1, int h1);
	cone(int x1, int y1, int z1,int r1,int h1 );
	void	set_cone(int x1, int y1, int z1, int r1, int h1);
	void	get_cone();
	double square();
	double volume();

};

