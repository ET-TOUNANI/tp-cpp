#include<iostream>  // LA TECHNIQUE D'HERITAGE CHAPITRE 8
#include "point.h"

class point{
	int x,y;
	public :
		void initialise(int abs,int ord){
			
			x = abs;
			y = ord;
		}
		void deplace(int dx,int dy){
			x = x+dx;
			y = y+dy;
		}
		void affiche(){
			cout << "le point est en  " << x<< " " <<y<<"\n";
		}	
};


class pointcol : public point{ // pointcol est une classe fille de point
	short couleur;
	public :
		void colore(short cl){
			couleur = cl;
		}
		void affichec();
		void initialisec(int, int, short);
};

void pointcol :: affichec(){
	affiche();
	cout << "couleur "<<couleur<<"\n";
}

void pointcol :: initialisec(int abs,int ord,short cl) {
	initialise(abs, ord);
	couleur = cl;
}
int main(){
	pointcol p;
	p.initialisec(10,20,5);
	p.affichec();
	p.deplace(2,4);
	p.affiche();
	return 0;
}
