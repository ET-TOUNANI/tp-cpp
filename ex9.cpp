// exercice9
//****"""""""""""""**"""""""""""""""""""""""""
#include <iostream>
//#include <conio.h>

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

int main()
{

    // getch();
    return 0;
}