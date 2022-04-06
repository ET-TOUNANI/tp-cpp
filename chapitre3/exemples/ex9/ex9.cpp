#include <iostream>
using namespace std;

class compte_objet
{
    static int ctr;

public:
    compte_objet();
    ~compte_objet();
    static void compte();
};

compte_objet ::compte_objet()
{
    cout << "++construction : il y a maintenant "
         << ++ctr
         << " objets\n ";
}

compte_objet ::~compte_objet()
{

    cout << " --desruction : il y a maintenant " << --ctr << " objets\n ";
}
void fonction()
{
    compte_objet u, v;
}

void main()
{
    void fonction();
    compte_objet ::compte();
    compte_objet a;
    compte_objet ::compte();
    fonction();
    compte_objet ::compte();
    compte_objet b;
    compte_objet ::compte();
}
