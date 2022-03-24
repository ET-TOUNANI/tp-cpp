#include <iostream>
int i = 11;
using namespace std;

void main()
{
    int i = 34;
    {
        int i = 23;
        ::i = ::i + 1;
        cout << ::i << " " << i << endl;
    }
    cout << ::i << " " << i << endl;
}