#include <iostream>
using namespace std;
class point
{
    int x, y;

public:
    point(int abs = 0, int ord = 2)
    {
        x = abs;
        y = ord;
    }                                           // constructeur
    void affiche(char * = "Position du point"); // argument par défaut
};
void point::affiche(char *message)
{
    cout << message;
    cout << "le point est en " << x << " " << y << "\n";
}
int main()
{
    point a, b(40);
    a.affiche();
    b.affiche("Point b");
    char texte[10] = "Bonjour";
    point c(3, 12);
    c.affiche(texte);
    return 0;
}
