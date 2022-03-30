#include <iostream>
using namespace std;
struct complexe{
    double reel, im;
};
void affiche(int);
void affiche(double);
void affiche(complexe);
int main(void){
    int a = 5;
    double d = 0.0;
    complexe c = {1.0, -1.0};
    affiche(a);
    affiche(d);
    affiche(c);
}
void affiche(int i){
    cout << "type de variable (int) " << endl;
    cout << "valeur : " << i << endl;
}
void affiche(double d){
    cout << "type de variable (double ) " << endl;
    cout << "valeur : " << d << endl;
}
void affiche(complexe c){
    cout << "type de variable (complexe ) " << endl;
    cout << "valeur : " << c.reel << endl;
    cout << "valeur : " << c.im << endl;
}