
#include <string.h>
#include <iostream>

using namespace std;

class complex
{
    double reel, imaginaire;

public:
    //----------------------------------------------
    complex()
    {
        reel = 0;
        imaginaire = 0;
    }
    //----------------------------------------------
    complex(double re, double imag = 0)
    {
        reel = re;
        imaginaire = imag;
    }
    //----------------------------------------------
    double real()
    {
        return reel;
    }
    //----------------------------------------------
    double imag()
    {
        return imaginaire;
    }
    //----------------------------------------------
    complex conj()
    {
        complex res;
        res.reel = reel;
        res.imaginaire = -imaginaire;
        return res;
    }
    //----------------------------------------------
    complex operator+(complex c)
    {
        complex res;
        res.reel = c.real() + reel;
        res.imaginaire = c.imag() + imaginaire;
        return res;
    }
    //----------------------------------------------
    complex operator-(complex c)
    {
        complex res;
        res.reel = c.real() - reel;
        res.imaginaire = c.imag() - imaginaire;
        return res;
    }
    //----------------------------------------------
    complex operator*(complex c)
    {
        complex res;
        res.reel = (c.real() * reel) - imaginaire * c.imag();
        res.imaginaire = reel * c.imag() + imaginaire * c.reel;
        return res;
    }
    //----------------------------------------------
    int operator!=(complex c)
    {
        if (c.imag() == imaginaire && c.real() == reel)
            return 0;
        else
            return 1;
    }

    //----------------------------------------------
    int operator==(complex c)
    {
        if (c.imag() == imaginaire && c.real() == reel)
            return 1;
        else
            return 0;
    }
    //----------------------------------------------
    double norm(complex);
    double arg(complex);
    complex polar(double mag, double angle = 0);
    complex operator/(complex c)
    {
        complex res;
        res.reel = (c.real() * reel + c.imag() * imaginaire) / (c.imag() * c.imag() + c.real() * c.real());
        res.imaginaire = (c.real() * imaginaire + c.imag() * reel) / (c.imag() * c.imag() + c.real() * c.real());
        return res;
    }
    ostream operator<<(ostream);
    istream operator<<(istream);

    //----------------------------------------------
    //----------------------------------------------
    friend complex operator*(double, complex);
    friend complex operator+(complex, double);
    friend complex operator*(complex, double);
    friend complex operator/(double, complex);
    friend complex operator/(complex, double);
    friend complex operator-(double, complex);
    friend complex operator-(complex, double);
    friend complex operator+(double, complex);
    friend complex operator+(complex, double);
};
complex operator+(double d, complex c)
{
    complex res;
    res.reel = c.real() + d;
    res.imaginaire = c.imag() + d;
    return res;
}
complex operator+(complex c, double d)
{
    complex res;
    res.reel = c.real() + d;
    res.imaginaire = c.imag() + d;
    return res;
}
complex operator-(double d, complex c)
{
    complex res;
    res.reel = c.real() - d;
    res.imaginaire = c.imag() - d;
    return res;
}
complex operator-(complex c, double d)
{
    complex res;
    res.reel = c.real() - d;
    res.imaginaire = c.imag() - d;
    return res;
}
complex operator*(complex c, double d)
{
    complex res;
    res.reel = (c.real() * d) - d * c.imag();
    res.imaginaire = d * c.imag() + d * c.reel;
    return res;
}
complex operator*(double d, complex c)
{
    complex res;
    res.reel = (c.real() * d) - d * c.imag();
    res.imaginaire = d * c.imag() + d * c.reel;
    return res;
}
complex operator/(double d, complex c)
{
    complex res;
    res.reel = (c.real() * d + c.imag() * d) / (c.imag() * c.imag() + c.real() * c.real());
    res.imaginaire = (c.real() * d + c.imag() * d) / (c.imag() * c.imag() + c.real() * c.real());
    return res;
}

complex operator/(complex c, double d)
{
    complex res;
    res.reel = (c.real() * d + c.imag() * d) / (c.imag() * c.imag() + c.real() * c.real());
    res.imaginaire = (c.real() * d + c.imag() * d) / (c.imag() * c.imag() + c.real() * c.real());
    return res;
}
