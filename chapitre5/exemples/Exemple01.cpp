#include <iostream>
using namespace std;
class vecteur
{
	float x, y;

public:
	vecteur(float, float);
	void afficher();
	vecteur operator+(vecteur);
};
vecteur::vecteur(float abs = 0, float ord = 0)
{
	x = abs;
	y = ord;
}
void vecteur::afficher()
{
	cout << "x =" << x << " y=" << y << "\n";
}
vecteur vecteur::operator+(vecteur v)
{
	vecteur res;
	res.x = v.x + x;
	res.y = v.y + y;
	return res;
}
int main()
{
	vecteur a(2, 6), b(4, 8), c, d, e, f;
	c = a + b;
	c.afficher();
	d = a.operator+(b);
	d.afficher();
	e = b.operator+(a);
	e.afficher();
	f = a + b + c;
	f.afficher();

	return 1;
}
