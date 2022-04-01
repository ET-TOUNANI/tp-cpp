#include <iostream>
#include <stdlib.h>
using namespace std;
class Hasard{
    int nbval;
    int *val;
public:
    Hasard(int, int);
    ~Hasard();
    void affiche();
};
Hasard::Hasard(int nb, int max){
    int i;
    val = new int[nbval = nb];
    for (i = 0; i < nb; i++)
        val[i] = double(rand()) / RAND_MAX * max;
}
Hasard::~Hasard(){
    delete val;
}
void Hasard::affiche(){
    int i;
    for (i = 0; i < nbval; i++)
        cout << val[i] << " ";
    cout << "\n";
}
int main(){
    Hasard suite1(15, 5);
    suite1.affiche();
    Hasard suite2(6, 12);
    suite2.affiche();
    return 0;
}