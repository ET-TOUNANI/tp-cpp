// exercice7

#include <iostream>
#include <stdio.h>
using namespace std;
void affiche(float x, int n = 0)
{

    if (n == 0)
    {
        cout << "result = 1";
        return;
    }
    int i = 0;
    float result = 1;
    while (i < n)
    {
        result = result * x;
        i++;
    }
    cout << "result = " << result;
}

void affiche(int n, float x = 0)
{

    if (x == 0)
    {
        cout << "result = 0";
        return;
    }
    int i = 0;
    float result = 1;
    while (i < n)
    {
        result = result * x;
        i++;
    }
    cout << "result = " << result;
}

int main()
{
    int n = 0;
    float x = 4.0;
    affiche(x, n);
    affiche(n, x);
    n = 2;
    x = 4.3;
    affiche(x, n);
    affiche(n, x);
    getch();
    return 0;
}