#include <iostream>
using namespace std;

// La valeur de retour d'une fonction est un objet
// Transmission par valeur
class point
{
    int x, y;

public:
    point(int abs = 0, int ord = 0)
    {
        x = abs;
        y = ord;
    } // constructeur
    point symetrique();
    void affiche();
};
point point ::symetrique()
{
    point res;
    res.x = -x;
    res.y = -y;
    return res;
}
void point ::affiche()
{
    cout << "Le point est en " << x << " et "
         << " " << y << "\n";
}
void main()
{
    point a, b(1, 6);
    a = b.symetrique();
    a.affiche();
    b.affiche();
}
