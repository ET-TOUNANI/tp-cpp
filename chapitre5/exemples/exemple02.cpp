#include <iostream>
using namespace std;
class vecteur
{
	float x, y;

public:
	vecteur(float, float);
	void afficher();
	vecteur operator+(vecteur);
	float operator*(vecteur);
};
vecteur::vecteur(float abs = 0, float ord = 0)
{
	x = abs;
	y = ord;
}
void vecteur::afficher()
{
	cout << x << " , " << y;
}
vecteur vecteur::operator+(vecteur v)
{
	vecteur res;
	res.x = v.x + x;
	res.y = v.y + y;
	return res;
}
float vecteur::operator*(vecteur v)
{
	float res;
	res = v.x * x + v.y * y;
	return res;
}
int main()
{
	vecteur a(2, 6), b(4, 8);
	float f;
	f = a * b;
	cout << "produit scalaire de : vecteur A:( ";
	a.afficher();
	cout << " ) et vecteur B: (";
	b.afficher();
	cout << ") est  " << f;

	return 1;
}
