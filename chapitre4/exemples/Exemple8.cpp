#include <iostream>
using namespace std;
class point
{
int x,y;
public:
    point(int,int);
    point(point &);
    ~point();
    point symetrique();
    void affiche(){cout<<"x="<<x<<" y="<<y<<"\n";};
};
point::point(point &pt)
{
    x=pt.x;y=pt.y;
    cout<<" \n Constructeur par recopie";
    cout<<" construction du point : "<<x<<" "<<y;
    cout<<" Adresse de l'objet : "<<this<<"\n";
}
point :: point(int abs=0,int ord=0)
{
    x=abs;y=ord;
    cout<<" construction du point : "<<x<<" "<<y;
    cout<<" Adresse de l'objet : "<<this<<"\n";
}
point ::~point()
{
    cout<<"destruction du point "<<x<<" "<<y;
    cout<<"son adresse est "<<this<<"\n";
}
point point::symetrique()
{
    point res;
    cout <<"*****************************************\n";
    res.x=-x;
    res.y=-y;
    cout<<"##########################################\n";
    return res;
}
int main()
{
    cout<<"Debut de main()\n";
    point a(1,4),b;
    cout<<"Avant Appel a Symetrique\n";
    b=a.symetrique();
    b.affiche();
    cout<<"Apres appel a symetrique et Fin de Main() \n";
    return 0;
}
