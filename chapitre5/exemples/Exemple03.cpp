#include <iostream>
using namespace std;
class liste
{
	int taille;
	float *adr;

public:
	liste(int);
	liste(liste &);
	void saisie();
	void affiche();
	void operator=(liste &);
	//	~liste();
};
liste::liste(int t)
{
	taille = t;
	adr = new float[taille];
	cout << "Construction \n";
	cout << " Adresse de l'objet: " << this;
	cout << " Adresse de liste: " << adr << "\n";
}
liste::liste(liste &v)
{

	taille = v.taille;
	adr = new float[taille];
	for (int i = 0; i < taille; i++)
		adr[i] = v.adr[i];
	cout << "\nConstructeur par recopie";
	cout << " Adresse de l'objet:" << this;
	cout << " Adresse de liste:" << adr << "\n";
}
void liste::saisie()
{
	int i;
	for (i = 0; i < taille; i++)
	{
		cout << "Entrer un nombre:";
		cin >> *(adr + i);
	}
}
void liste::affiche()
{
	int i;
	cout << "Adresse:" << this << " ";
	for (i = 0; i < taille; i++)
		cout << *(adr + i) << " ";
	cout << "\n\n";
}
void liste::operator=(liste &lis)
{
	cout << " \n hello from operator \n";
	int i;
	taille = lis.taille;
	delete adr;
	adr = new float[taille];
	for (i = 0; i < taille; i++)
		adr[i] = lis.adr[i];
}
int main()
{
	cout << "Debutde main()\n";
	liste a(5);
	liste b(2);
	a.saisie();
	a.affiche();
	b.saisie();
	b.affiche();
	b = a;
	b.affiche();
	a.affiche();
	cout << "Fin de main() \n";
}
