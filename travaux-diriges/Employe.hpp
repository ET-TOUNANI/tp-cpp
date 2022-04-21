#ifndef _Employe_
#define _Employe_
#include <iostream>
#include <string>
using namespace std;
class Employe
{
private:
    int matricule;
    string nom;
    float salaire;
    int age;
public:
    Employe(int m, string n, float s, int ag)
    {
        matricule = m;
        nom = n;
        salaire = s;
        age = ag;
    }
    void toString()
    {
        cout << "Information d'Emplye : " << endl;
        cout << "\t Matricule : " << matricule << "\t Nom : " << nom << "\t Salaire : " << salaire << "\t Age : " << age << endl;
    }
    float getSalaire()
    {
        return salaire;
    }
    void setSalaire(float s)
    {
        salaire = s;
    }
    void afficherS()
    {
        cout << "Salaire : " << salaire << endl;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int a)
    {
        age = a;
    }
    void afficherA()
    {
        cout << "Age : " << age << endl;
    }
    ~Employe() {}
};
#endif