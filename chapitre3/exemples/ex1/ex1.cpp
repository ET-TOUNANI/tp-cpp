#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point();
    Point(int);
    Point(int, int);
    void affiche();
    void affiche(char *);
};
Point ::Point()
{
    x = 0;
    y = 0;
}

Point ::Point(int abs)
{
    x = abs;
    y = abs;
}

Point ::Point(int abs, int ord)
{
    x = abs;
    y = ord;
}
void Point ::affiche()
{
    cout << " je suis en " << x << " " << y;
}

void Point ::affiche(char *message)
{
    cout << message << endl;
}

int main()
{
    Point a;
    a.affiche();
    Point b(5);
    b.affiche("point b");
    Point c(3, 12);
    c.affiche("point c");

    return 0;
}