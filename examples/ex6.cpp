#include <iostream>
using namespace std;

void f1(int n = 3)
{
    cout << n;
}
void f2(int n, float x = 2.35)
{
    cout << n << "  " << x;
}
void f3(char c, int n = 3, float x = 2.35)
{
    cout << n << "  " << x << " " << c;
}

void main()
{
    char a = 0;
    int i = 2;
    float r = 5.6;
    f1(i);
    f1();
    f2(i, r);
    f2(i);
    f3(a, i, r);
    f3(a, i);
    f3(a);
}