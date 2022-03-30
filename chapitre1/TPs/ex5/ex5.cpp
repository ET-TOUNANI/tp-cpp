#include <iostream>
using namespace std;
void test(int n = 0, float x = 2.5)
{
    cout << "Fontion N°1 : ";
    cout << "n= " << n << " x= " << x << "\n";
}
void test(float n = 4.1, int x = 2)
{
    cout << "Fontion N°2 : ";
    cout << "n= " << n << " x= " << x << "\n";
}
int main()
{
    int i = 5;
    float r = 3.2;
    test(i, r); // Fontion N°1
    test(r, i); // Fontion N°2
    test(i);    // Fontion N°1
    test(r);    // Fontion N°2
    return 0;
}
