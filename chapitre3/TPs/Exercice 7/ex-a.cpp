#include <iostream>
using namespace std;

class vecteur
{
    float x, y;

public:
    vecteur(float, float);
    void homotethie(float);
    void affiche();
    float det(vecteur);
};

vecteur::vecteur(float abs = 0, float ord = 0)
{
    x = abs;

    y = ord;
}
void vecteur ::homotethie(float val)
{
    x = x * val;
    y = y * val;
}
void vecteur::affiche()
{
    cout << "x = " << x << " y = " << y << "\n";
}
float vecteur::det(vecteur v)
{
    float res;
    res = x * v.y - y * v.x;
    return res;
}
int main()
{
    vecteur v1(2.3, 5.4), v2(1.3, 2.2);
    v1.affiche();
    v2.affiche();
    cout << "determinant est : " << v1.det(v2);
    return 0;
}