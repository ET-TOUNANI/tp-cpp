#include <iostream>
#include <string.h>
using namespace std;
class note
{
    float value;

public:
    note(float v)
    {
        value = v;
    }
    void input();
    void print();
    void set(float);
    float get();
    string apprecier();
    void harmonise(note &);
    void moyenne(note *, int);
    char *apprecier(note *, int);
};

void note ::input()
{
    cout << "saisissez la note : ";
    cin >> value;
    if (value > 20 || value < 0)
    {
        cout << "la  note ne doit pas etre >20 ou <0 : ";
        note ::input();
    }
}

void note ::print()
{
    cout << "la note est : " << value;
}

void note ::set(float v)
{
    value = v;
}

float note ::get()
{
    return value;
}

string note ::apprecier()
{
    if (value >= 16)
        return "tres bien";
    else if (value <= 15 && value >= 12)
        return "bien";
    else if (value < 12 && value >= 10)
        return "passable";
    else
        return "mauvaise note";
}

void harmonise(note &a)
{
    if (a.get() < 8)
        a.set(0);
    else
        a.set(8);
}

float moyenne(note *t, int n)
{
    float somme = 0;
    for (int i = 0; i < n; i++)
        somme += t[i].get();
    return (somme / n);
}

void apprecier(note *t, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\n"
             << t[i].get() << " .. " << t[i].apprecier() << "\n";
    }
}

int main()
{

    int n;
    float v;
    note *T;
    cout << "  donnez le nbr d'eleves : ";
    cin >> n;
    T = new note(n);

    for (int i = 0; i < n; i++)
    {
        cout << "\n Donner note : ";
        cin >> v;
        T[i].set(v);
    }
    apprecier(T, n);
    cout << "\n moyenne des notes avant Harmonise " << moyenne(T, n) << "\n";

    for (int i = 0; i < n; i++)
    {
        if (T[i].get() < 15)
            harmonise(T[i]);
    }
    cout << "\n moyenne des notes apres Harmonise " << moyenne(T, n) << "\n";
    return 0;
}
