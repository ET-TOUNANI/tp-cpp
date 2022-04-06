#include <iostream>
using namespace std;

class vecteur
{
    float x, y;

public:
    vecteur(float, float);
    vecteur &homotethie(float);
    void affiche();
    float det(vecteur *);
};

vecteur::vecteur(float abs = 0, float ord = 0)
{
    x = abs;

    y = ord;
}
vecteur &vecteur ::homotethie(float val)
{
    static vecteur v;
    v.x = x * val;
    v.y = y * val;
    return v;
}
void vecteur::affiche()
{
    cout << "x = " << x << " y = " << y << "\n";
}
float vecteur::det(vecteur *v)
{
    float res;
    res = x * v->y - y * v->x;
    return res;
}
int main()
{
    vecteur v1(2.3, 5.4), v2(1.3, 2.2);
    v1.affiche();
    v2.affiche();
    cout << "determinant est : " << v1.det(&v2);
    return 0;
}