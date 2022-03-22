// exercice9
//****"""""""""""""**"""""""""""""""""""""""""
#include <iostream>
//#include <conio.h>
using namespace std;
struct essai
{
    int n;
    float x;
};

void remize_a_zero(struct essai &test)
{
    test.n = 0;
    test.x = 0;
}
void remize_a_zero(struct essai *test)
{
    test->n = 0;
    test->x = 0;
}
void afficher(struct essai test)
{
    cout << "n= " << test.n << " x = " << test.x;
}

int main()
{
    struct essai test;
    remize_a_zero(test);
    afficher(test);
    remize_a_zero(&test);
    afficher(test);
    return 0;
}