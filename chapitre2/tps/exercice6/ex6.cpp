// exercice 6
#include <iostream>
#include <stdlib.h>
using namespace std;

class SuitAr
{

    int nbval, *val;

public:
    SuitAr(int, int);
    ~SuitAr();
    void afficher();
};

SuitAr::SuitAr(int nb, int mul)
{
    int i;
    nbval = nb;
    val = new int[nbval];
}
SuitAr::~SuitAr()
{
    cout << "detruire object"<<endl;
}
int main()
{
    SuitAr ar(2, 4);

    return 0;
}