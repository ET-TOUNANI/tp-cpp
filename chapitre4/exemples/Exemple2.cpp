#include <iostream>
using namespace std;
class point
{
    int x,y;
public:
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
point a(1,4);
int main()
{
    cout<<"Debut de main()\n";
    point b(5,10);
    cout<<"Fin de Main() \n";
    return 0;
}

