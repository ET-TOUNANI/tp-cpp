#include <iostream>
using namespace std;
class liste
{
int taille;
float *adr;
public:
    liste(int);
    liste(liste &);
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
int main()
{
    cout<<"Debut de main()\n";
    liste a(3);
    liste b=a;
    cout<<"Fin de Main() \n";
    return 0;
}
