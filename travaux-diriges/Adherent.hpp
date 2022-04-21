
#ifndef _Adherent_
#define _Adherent_
#include "Employe.hpp"
using namespace std;

class Adherent : public Employe
{
private:
    /* data */
    string dateAdherent;
    float MontantParticipation;

public:
    Adherent(int m, string n, float s, int ag, string d, float mont) : Employe(m, n, s, ag)
    {
        dateAdherent = d;
        MontantParticipation = mont;
    }
    float getMontant()
    {
        return MontantParticipation;
    }
    void setMontant(float m)
    {
        MontantParticipation = m;
    }
    float getSalaire()
    {
        return Employe::getSalaire() - MontantParticipation;
    }
    void afficherS()
    {
        cout << "Salaire diminue de salaire origin : " << Adherent::getSalaire() << endl;
    }
    ~Adherent() {}
};

#endif