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
    cout<<"son adresse est:"<<this<<"\n";
}
point::~point()
{
    cout<<"destruction du point "<<x<<" "<<y<<"\n";
    cout<<"son adresse est:"<<this<<"\n";
}
int main()
{
    cout<<"Debut de main()\n";
    point a(3,7);
    point b=a;
    cout<<"Fin de Main() \n";
    return 0;
}
