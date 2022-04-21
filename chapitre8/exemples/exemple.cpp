#include <cstdlib>
#include <iostream>
using namespace std;
class point
{
      int x, y;

public:
      point(int abs, int ord)
      {
            cout << "++Const.point: "
                 << "\n";
            x = abs;
            y = ord;
      }
      ~point()
      {
            cout << "--Dest.point"
                 << "\n";
      }
      void afficher()
      {
            cout << "Coordonn�es" << x << " " << y << "\n";
      }
};
class coul
{
      short couleur;

public:
      coul(int cl)
      {
            cout << "++Const.coul"
                 << "\n";
            couleur = cl;
      }
      ~coul()
      {
            cout << "--Dest.coul"
                 << "\n";
      }
      void afficher()
      {
            cout << "couleur:" << couleur << "\n";
      }
};
class pointcol : public point, public coul
{
public:
      pointcol(int, int, int);
      ~pointcol()
      {
            cout << "--Dest.pointcol"
                 << "\n";
      }
      void affiche()
      {
            point::afficher();
            coul::afficher();
      }
};
pointcol::pointcol(int abs, int ord, int cl) : point(abs, ord), coul(cl)
{
      cout << "++Const.pointcol"
           << "\n";
}
int main(int argc, char *argv[])
{
      pointcol p(3, 9, 2);
      p.coul::afficher();
      cout << "-------------"
           << "\n";
}
