#include <cstdlib>
#include <iostream>
#include "Employe.hpp"
#include "Adherent.hpp"
using namespace std;

int main(int argc, char *argv[])
{
      //**********************************
      Employe E1(1, "Ahmed", 5000, 30);
      Employe E2(2, "Said", 30000, 20);
      //***********************************
      Adherent A1(1, "Marwa", 40000, 50, "10/01/2021", 2000);
      Adherent A2(2, "Abderrahmane", 10000, 60, "10/04/2021", 1000);
      cout << "***********************************" << endl;
      E1.toString();
      cout << "***********************************" << endl;
      A2.toString();
      cout << "***********************************" << endl;
      E1.setAge(33);
      E1.afficherA();
      cout << "***********************************" << endl;
      E1.setSalaire(44);
      E1.afficherS();
      cout << "***********************************" << endl;
      A2.getSalaire();
      A2.getMontant();
      A2.setMontant(34);
      A2.toString();
      cout << "***********************************" << endl;
      E1.toString();
}
