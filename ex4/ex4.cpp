#include <iostream>
//#include <conio.h>
using namespace std;

float puissance(float x, int n=4 ){
    float resultat=1,i=0;
    while(i<n){
        resultat=resultat*x;
        i++;
    }
    return resultat;
}


int main()
{

    cout << puissance(2,3.4);

    //getch();

    return 0;
}
