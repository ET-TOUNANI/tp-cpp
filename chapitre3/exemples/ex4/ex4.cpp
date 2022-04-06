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
    } // constructeur
    int coincide(point);
};
int point::coincide(point pt)
{
    if ((pt.x = x) && (pt.y = y))
        return 1;
    else
        return 0;
}
int main()
{
    int test1, test2;
    point a, b(1), c(0, 2);
    test1 = a.coincide(b);
    test2 = b.coincide(a);
    cout << "a et b:" << test1 << " ou " << test2 << "\n";
    test1 = a.coincide(c);
    test2 = c.coincide(a);
    cout << "a et c: " << test1 << " ou " << test2 << "\n";
    return 0;
}