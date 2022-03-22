
#include <iostream> // cin et cout sont definis dans iostream
using namespace std;
int main()
{
    int n;
    float x;

    cout << "donnez un entier et un flottant \n"; // equivalent de printf
    cin >> n;                                     // equivalent de scanf
    cin >> x;
    cout << "le produit de " << n << " par " << x << "\n est " << n * x << endl;
    return 0;
}