#include <iostream>
using namespace std;
class liste
{
    int taille;
    float *adr;

public:
    liste(int);
    liste(liste &);
    void saisie();
    void affiche();
    void operator=(liste &);
    float &operator[](int);
    //	~liste();
};
float &liste::operator[](int i)
{
    return this->adr[i];
}
liste::liste(int t)
{
    taille = t;
    adr = new float[taille];
}
liste::liste(liste &v)
{

    taille = v.taille;
    adr = new float[taille];
    for (int i = 0; i < taille; i++)
        adr[i] = v[i];
}
void liste::saisie()
{
    int i;
    for (i = 0; i < taille; i++)
    {
        cout << "Entrer un nombre:";
        cin >> (*this)[i];
    }
}
void liste::affiche()
{
    int i;
    cout << "Adresse:" << this << " ";
    for (i = 0; i < taille; i++)
        cout << (*this)[i] << " ";
}

void liste::operator=(liste &lis)
{
    int i;
    taille = lis.taille;
    delete adr;
    adr = new float[taille];
    for (i = 0; i < taille; i++)
        adr[i] = lis[i];
}

int main()
{
    cout << "Debutde main()\n";
    liste a(5);
    liste b(2);
    a.saisie();
    cout << "\n------------------------------------\n";
    a.affiche();
    cout << "\n------------------------------------\n";
    b.saisie();
    b.affiche();
    cout << "\n------------------------------------\n";
    b = a;
    b.affiche();
    cout << "\n------------------------------------\n";
    a.affiche();
    cout << "\n------------------------------------\n";
    cout << "Fin de main() \n";
}
