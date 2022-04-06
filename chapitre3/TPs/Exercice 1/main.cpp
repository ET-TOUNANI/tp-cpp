#include <cstdlib>
#include <iostream>

using namespace std;

class compteur
{
    static int ctr;

public:
    compteur();
    ~compteur();
    void essai();
};
int compteur::ctr = 0;
// constrecteur
compteur::compteur()
{
    cout << "un nouvel objet est cr�e\n";
    ctr++;
    cout << "nombre d objet = " << ctr << endl;
}
// destrecteur
compteur::~compteur()
{
    cout << "une objet est detruite" << endl;
    ctr--;
    cout << "il reste " << ctr << " Objets \n";
}

void compteur::essai()
{
    compteur u, v;
}

int main(int argc, char *argv[])
{
    void essai();
    compteur a;
    void essai();
    compteur b;
    system("PAUSE");
}
