#include <iostream>
using namespace std;
class point
{
public:
    int x,y;
    point(int,int);
    ~point();
};
point :: point(int abs,int ord)
{
    x=abs;y=ord;
    cout <<"Construction du point " <<x<<"  "<<y<<"\n";
}
point::~point()
{
    cout<<"destruction du point "<<x<<" "<<y<<"\n";
}
int main()
{
    void fct(point *);
    point *adr;
    cout<<"Debut de main()\n";
    adr=new point(3,7);
    fct(adr);
    cout<<adr->x<<" . "<<adr->y;
    delete adr;
    cout<<"Fin de Main() \n";
    return 0;
}
void fct(point *adp)
{
    cout <<"Debut de la fonction \n";
    adp->x=4;
    adp->y=6;
    cout<<adp->x<<adp->y<<"Fin de la fonction \n";
}
