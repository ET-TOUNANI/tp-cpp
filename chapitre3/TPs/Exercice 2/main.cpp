#include <cstdlib>
#include <iostream>

using namespace std;

class point
{
  int x, y;

public:
  point();
  point(int);
  point(int, int);
  void afficher();
  void afficher(char *);
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

  point a;
  a.afficher();
  a.afficher("this is the point");
  return 0;
}
