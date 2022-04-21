#include <iostream>
#include <string>
using namespace std;
// partie1
class Coordonee
{
private:
    int x, y;

public:
    Coordonee(int, int);
    void deplace(int, int);
    void affichage();
};
Coordonee::Coordonee(int a = 0, int b = 0)
{
    x = a;
    y = b;
}
void Coordonee::deplace(int a, int b)
{
    x += a;
    y += b;
}
void Coordonee::affichage()
{
    cout << "X = " << x << " Y = " << y << endl;
}
// la class Forme
class Forme
{
protected:
    short couleur;

public:
    Forme(short);
    Forme(const Forme &);
    void affichage();
    Forme operator=(Forme &);
};
Forme::Forme(short c) : couleur(c) {}
Forme::Forme(const Forme &forme)
{
    cout << "Copy Constructor" << endl;
}
void Forme::affichage()
{
    cout << "Couleur : " << couleur << endl;
}
Forme Forme::operator=(Forme &forme)
{
    cout << "Operator =" << endl;
    forme.couleur = this->couleur;
    return forme;
}
// partie2
class Cercle : public Forme
{
protected:
    Coordonee centre;
    short rayon;

public:
    Cercle(int, int, short, short);
    Cercle(Cercle &);
    Cercle operator=(Cercle &);
    void affichage();
    void deplace(int, int);
    float surface();
    float perimetre();
};
Cercle::Cercle(int x, int y, short r, short couleur) : Forme(couleur)
{
    centre = Coordonee(x, y);
    rayon = r;
}
Cercle::Cercle(Cercle &cercle) : Forme(cercle)
{
}
void Cercle::affichage()
{
    cout << "Affichage d'un Cercle" << endl;
    Forme::affichage();
    centre.affichage();
    cout << "Rayon : " << rayon << endl;
}
void Cercle::deplace(int a, int b)
{
    centre.deplace(a, b);
}
float Cercle::surface()
{
    return 3.14 * rayon * rayon;
}
float Cercle::perimetre()
{
    return 2 * 3.14 * rayon;
}
// partie3
class Triangle : public Forme
{
protected:
    Coordonee a, b, c;
public:
    Triangle(int, int, int, int, int, int, short);
    Triangle(Triangle &);
    Triangle operator=(Triangle &);
    void affichage();
    void deplace(int, int);
    float surface();
    float perimetre();
};
Triangle::Triangle(int d, int e, int f, int g, int h, int i, short couleur) : Forme(couleur)
{
    a = Coordonee(d, e);
    b = Coordonee(f, g);
    c = Coordonee(h, i);
}
Triangle::Triangle(Triangle &triangle) : Forme(triangle)
{
}
void Triangle::affichage()
{
    cout << "Affichage d'un Triangle" << endl;
    Forme::affichage();
    a.affichage();
    b.affichage();
    c.affichage();
}
void Triangle::deplace(int x, int y)
{
    a.deplace(x, y);
    b.deplace(x, y);
    c.deplace(x, y);
}
float Triangle::surface()
{
    return 1; // formule de surface d'un triangle
}
float Triangle::perimetre()
{
    return 2; // formule de perimetre d'un triangle
}
// partie4
class Rectangle : public Forme
{
protected:
    Coordonee a, b;

public:
    Rectangle(int, int, int, int, short);
    Rectangle(Rectangle &);
    Rectangle operator=(Rectangle &);
    void affichage();
    void deplace(int, int);
    float surface();
    float perimetre();
};
Rectangle::Rectangle(int d, int e, int f, int g, short couleur) : Forme(couleur)
{
    a = Coordonee(d, e);
    b = Coordonee(f, g);
}
Rectangle::Rectangle(Rectangle &rectangle) : Forme(rectangle)
{
}
void Rectangle::affichage()
{
    cout << "Affichage d'un Rectangle" << endl;
    Forme::affichage();
    a.affichage();
    b.affichage();
}
void Rectangle::deplace(int x, int y)
{
    a.deplace(x, y);
    b.deplace(x, y);
}
float Rectangle::surface()
{
    return 10; // formule de surface d'un rectangle
}
float Rectangle::perimetre()
{
    return 20; // formule de perimetre d'un rectangle
}
// Partie5
class Carre : public Forme
{
protected:
    Coordonee a;
    short cote;

public:
    Carre(int, int, short, short);
    Carre(Carre &);
    Carre operator=(Carre &);
    void affichage();
    void deplace(int, int);
    float surface();
    float perimetre();
};
Carre::Carre(int x, int y, short c, short couleur) : Forme(couleur)
{
    a = Coordonee(x, y);
    cote = c;
}
Carre::Carre(Carre &carre) : Forme(carre)
{
}
void Carre::affichage()
{
    cout << "Affichage d'un Carre" << endl;
    Forme::affichage();
    a.affichage();
    cout << "Cote : " << cote << endl;
}
void Carre::deplace(int x, int y)
{
    a.deplace(x, y);
}
float Carre::surface()
{
    return cote * cote;
}
float Carre::perimetre()
{
    return 4 * cote;
}
