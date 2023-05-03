#include <iostream>
using namespace std;
class cone {
protected:
	int x, y, z, R_big, h, V, S;
	int sas1;
public:
	int sas2;
	cone();
	cone(int r1, int h1);
	cone(int x1, int y1, int z1,int r1,int h1 );
	void	set_cone(int x1, int y1, int z1, int r1, int h1);
	void	get_cone();
	double square();
	double volume();

};
class Truncated_cone : public cone {
	int r_small;
public:
	Truncated_cone();
	Truncated_cone(int R1, int r1, int h1);
	Truncated_cone(int x1, int y1, int z1, int R1, int r1, int h1);
	double square();
	double volume();
	friend ostream& operator<<(ostream& os, const Truncated_cone& ob);
	friend istream& operator>>(istream& is, Truncated_cone& ob);
	bool operator==(const Truncated_cone& other) const;

	// Перегрузка оператора неравенства
	bool operator!=(const Truncated_cone& other) const;

	// Перегрузка оператора меньше
	bool operator<(const Truncated_cone& other) const;

	// Перегрузка оператора больше
	bool operator>(const Truncated_cone& other) const;

	// Перегрузка оператора меньше или равно
	bool operator<=(const Truncated_cone& other) const;

	// Перегрузка оператора больше или равно
	bool operator>=(const Truncated_cone& other) const;
};