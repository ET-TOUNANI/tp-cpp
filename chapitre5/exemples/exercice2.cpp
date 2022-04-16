#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class chaine
{

    int l;
    char *adr;

public:
    chaine()
    {
        l = 0;
        adr = (char *)malloc(10 * sizeof(char));
        adr = NULL;
    }
    chaine(char *);
    char *getChaine();
    chaine(chaine &);
    chaine operator=(char *);
    bool operator==(char *);
    chaine operator+(char *);
    char operator[](int i);
    void afficher();
};

chaine::chaine(char *t)
{
    l = strlen(t);
    strcpy(adr, t);
}
chaine::chaine(chaine &a)
{
    l = a.l;
    for (int i = 0; i < l; i++)
        adr[i] = a[i];
}
chaine chaine::operator=(char *cp)
{
    chaine c;
    c.l = strlen(cp);
    strcpy(c.adr, cp);
    return c;
}

bool chaine::operator==(char *t)
{
    if (strcmp(adr, t))
        return true;
    return false;
}

chaine chaine::operator+(char *b)
{
    chaine c;
    c.adr = strcat(this->adr, b);
    c.l = strlen(b) + l;
    return c;
}

char chaine::operator[](int i)
{
    return adr[i];
}
void chaine::afficher()
{
    cout << adr << endl;
}
char *chaine::getChaine()
{
    return adr;
}
int main()
{
    char *test = (char *)"hi";
    char *test2 = (char *)"hello";
    chaine a(test);
    chaine b(test2);

    if (a.operator==(b.getChaine()))
        printf("oui \n");
    else
        printf("non \n");

    chaine c;
    c = a.operator+(b.getChaine());
    c.afficher();
    return 0;
}
