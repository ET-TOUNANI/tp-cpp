#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
class Complexe{
private:
    double x, y;
public:
    Complexe();
    Complexe(double, double);
    Complexe(double a);
    void set(double, double);
    double module();
    void affiche();
    double real() const;
    double img() const;
};
void Complexe::set(double a, double b){
    x = a;
    y = b;
}
double Complexe::module(){
    double res;
    res = sqrt(x * x + y * y);
    return res;
}
void Complexe::affiche(){
    printf("%f  +   %f  i\n", x, y);
}
Complexe::Complexe(double a, double b){
    x = a;
    y = b;
}
Complexe::Complexe(double a){
    x = a;
    y = 0;
}

Complexe::Complexe()
{
    x = 0;
    y = 0;
}
int main()
{
    Complexe c1(15.4, 5.2);
    c1.affiche();

    Complexe c2(5.2);
    c2.affiche();

    double res = c1.module();
    cout << "module : " << res << endl;
    return 0;
}