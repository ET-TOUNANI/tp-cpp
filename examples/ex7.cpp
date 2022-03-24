#include <iostream>
using namespace std;

int somme(int n1, int n2)
{
    return n1 + n2;
}
int somme(int n1, int n2, int n3)
{
    return n1 + n2 + n3;
}
double somme(double n1, double n2)
{
    return n1 + n2;
}

void main()
{
    cout << "1+2 = " << somme(1, 2) << endl;
    cout << "1+2+3 = " << somme(1, 2, 3) << endl;
    cout << "1.2+2.3 = " << somme(1.2, 2.3) << endl;
}