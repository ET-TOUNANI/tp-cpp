#include <cstdlib>
#include <iostream>

using namespace std;

class point 
 { int x,y;
  
   public:
     point(int abs=0, int ord=2)
      {
          x=abs;
          y=ord;     
       };//constrecteur
      int coincide(point);
      void affiche();
      
 };

int point::coincide(point pt)
 {
  if((pt.x==x)&&(pt.y==y))
    return (1);
  else
    return (0);                        
 }
 
 /*void point::affiche()
  {
    cout <<"X = "<<x<<"\n";
    cout <<"Y = "<<y<<"\n"; 
   }*/

int main(int argc, char *argv[])
{
    
    int test1,test2;
    point a,b(1),c(0,2);
    //a.affiche();
    test1=a.coincide(b);
    test2=b.coincide(a);
    cout<<"a et b :"<<test1<<" ou "<<test2<<"\n";
    
    test1=a.coincide(c);
    test2=c.coincide(a);
    cout<<"a et c :"<<test1<<" ou "<<test2<<"\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
