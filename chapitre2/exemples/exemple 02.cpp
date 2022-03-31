#include<iostream>
#include <conio.h>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y)
{
  static HANDLE h = NULL;  
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };  
  SetConsoleCursorPosition(h,c);
}
class point {
	int x,y;
	public: point();
			void deplace(int,int);
			void affiche();
};

point :: point(){
	x=20;
	y=20;
}

void point :: deplace(int dx,int dy){
	x = x+dx;
	y = y+dy;
}

void point::affiche(){
	gotoxy(x,y);
	gotoxy(x,y);
	printf("*");
}

int main(){
	point a,b;
	a.affiche();
	getch();
	a.deplace(17,10);
	a.affiche();
	getch();
	//clrscr();
	b.affiche();
	getch();
}
