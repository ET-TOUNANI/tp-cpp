#include <iostream>
#include <string.h>
using namespace std;
class note
{
    float value;

public:
    void input();
    void print();
    void set(float);
    float get();
    string apprecier();
};
void note ::input()
{
    cout << "saisisez la note : ";
    cin >> value;
    if (value > 20 || value < 0)
    {
        cout << "la note ne doit pas etre >20 ou <0: ";
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
int main()
{
    note a;
    a.input();
    string chaine = a.apprecier();
    cout << "\n"
         << chaine << "\n";
    return 0;
}
