#include <cstdlib>
#include <iostream>

using namespace std;

class point
{
  int x, y;

public:
  inline point();
  inline point(int);
  inline point(int, int);
  inline void afficher();
  inline void afficher(char *);
};

point::point() // constructeur par d�faut
{
  x = 0;
  y = 0;
}
point::point(int a) // constructeur avec un seul paramettre
{
  x = a;
  y = 0;
}
point::point(int a, int b) // constructeur avec des paramattre
{
  x = a;
  y = b;
}
void point::afficher()
{
  cout << " je suis en " << x << " " << y << endl;
}
void point::afficher(char *msg)
{
  cout << msg;
  afficher();
}

int main(int argc, char *argv[])
{

  point a(2);
  a.afficher();
  a.afficher("this is the point");
  return 0;
}
