#include "classes.hpp"

int main(int argc, char **argv)
{
    Cercle cl(10, 20, 5, 12);
    cl.affichage();
    cl.deplace(5, 4);
    cl.affichage();
    Triangle t(10, 20, 30, 40, 50, 50, 11);
    t.affichage();
    t.deplace(4, 5);
    t.affichage();
    Rectangle r(10, 20, 30, 40, 50);
    r.affichage();
    r.deplace(4, 5);
    r.affichage();
    Carre cr(10, 20, 5, 10);
    cr.affichage();
    cr.deplace(4, 5);
    cr.affichage();
    return 0;
}