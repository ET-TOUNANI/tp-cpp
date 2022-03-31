#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class SuiteAr{
	int nbval, *val;
	public:
		SuiteAr(int,int);
		~SuiteAr();
		void affiche();
};

SuiteAr::SuiteAr(int nb,int mul){
	int i;
	nbval = nb;
	val = new int [nbval];
	for(i=0;i<nbval;i++){
		val[i] = i*mul;
	}
}
SuiteAr::~ SuiteAr(){
	delete val;
}
void SuiteAr::affiche()
{
	int i;
	for(i=0;i<nbval;i++){
		cout<<val[i]<<" ";
	}
	cout<<"\n";
}

int main(){
//	clrscr();
	SuiteAr suite1(10,4);
	suite1.affiche();
	getch();
	SuiteAr suite2(6,8);
	suite2.affiche();
	getch();
}
