#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int abs = 0, int ord = 0)
    {
        x = abs;
        y = ord;
    } // constructeur en ligne
    void affiche();
    int coincide(point *);
};
void point ::affiche()
{
    cout << "Adresse : " << this << " - Coordonnees " << y << x << endl;
}
int point::coincide(point *adpt)
{
    if ((this->x == adpt->x) && (this->y == adpt->y))
        return 1;
    else
        return 0;
}
int main()
{
    point a(5), b(3, 15);
    a.affiche();
    b.affiche();
    return 0;
}