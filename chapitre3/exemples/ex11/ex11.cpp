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
    float prod_scal(vecteur);
    vecteur somme(vecteur);
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

float vecteur::prod_scal(vecteur v)
{
    float res;
    res = x * v.x + y * v.y;
    return res;
}
vecteur vecteur::somme(vecteur v)
{
    vecteur res;
    res.x = x + v.x;
    res.y = y + v.y;
    return res;
}

int main()
{
    vecteur v1(2.3, 5.4), v2(1.3, 2.2);
    v1.affiche();
    v2.affiche();
    cout << "determinant est : " << v1.det(v2);
    cout << "produit scalaire est : " << v1.prod_scal(v2);
    vecteur v3;
    v3 = v1.somme(v2);
    v3.affiche();
    return 0;
}