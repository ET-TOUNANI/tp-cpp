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
    liste oppose();
    ~liste();
};
liste::liste(liste &v)
{
    taille=v.taille;
    adr=new float[taille];
    for(int i=0;i<taille;i++)
    {
        adr[i]=v.adr[i];
    }
    cout<<" \n Constructeur par recopie";
    cout<<" Adresse de l'objet : "<<this;
    cout<<" Adresse de la liste : "<<adr<<"\n";
}
liste :: liste(int t)
{
    taille=t;
    adr=new float[taille];
    cout <<"Construction " << "adresse de l'objet: "<<this<<"\n";
    cout <<"Adresse de la liste : "<<adr<<"\n";}
liste::~liste()
{
    cout<<"destruction de l'objet avec l'adresse \n"<<this<<"\n";
    cout<<"l'adresse de la liste est:"<<adr<<"\n";
    delete adr;
}
void liste::saisie()
{
    int i;
    for(i=0;i<taille;i++)
    {
        cout<<"Entrer un Nombre : ";
        cin>>*(adr+i);
    }
}
void liste::affiche()
{
    int i;
    for(i=0;i<taille;i++)
    {
        cout<<*(adr+i)<<" ";
    }
    cout<<"\n Adresse de l'objet : "<<this<<" Adresse de liste : "<<adr<<"\n";
}

liste liste::oppose()
{
    liste res(taille);
    for(int i=0;i<taille;i++)
    {
        res.adr[i]=-adr[i];
    }
    for(int i=0;i<taille;i++)
    {
        cout<<res.adr[i]<<" ";
    }
    cout <<"\n";
    return res;
}

int main()
{
    cout<<"Debut de main()\n";
    liste a(3),b(3);
    a.saisie();
    a.affiche();
    b=a.oppose();
    b.affiche();
    cout<<"Fin de Main() \n";
    return 0;
}
