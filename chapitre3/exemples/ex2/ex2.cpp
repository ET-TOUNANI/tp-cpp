#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int abs)
    {
        x = abs;
        y = abs;
    }
    Point(int abs, int ord)
    {
        x = abs;
        y = ord;
    }
    void affiche()
    {
        cout << " je suis en " << x << " " << y;
    }
    void affiche(char *message)
    {
        cout << message << endl;
    }
};

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