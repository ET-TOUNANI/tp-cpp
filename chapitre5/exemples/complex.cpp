#include <string.h>
#include <iostream>
#include <math.h>
using namespace std;
class Complex
{
    double reel, imaginaire;

public:
    // Constructeur par défaut
    Complex()
    {
        reel = 0;
        imaginaire = 0;
    }
    // constructeur plein
    Complex(double re, double imag = 0)
    {
        reel = re;
        imaginaire = imag;
    }
    // partie real
    double real()
    {
        return reel;
    }
    // partie imaginaire
    double imag()
    {
        return imaginaire;
    }
    // the complex congugate
    Complex conj()
    {
        Complex res;
        res.reel = reel;
        res.imaginaire = -imaginaire;
        return res;
    }
    // addition
    Complex operator+(Complex c)
    {
        Complex res;
        res.reel = c.real() + reel;
        res.imaginaire = c.imag() + imaginaire;
        return res;
    }
    //----------------------------------------------
    Complex operator-(Complex c)
    {
        Complex res;
        res.reel = c.real() - reel;
        res.imaginaire = c.imag() - imaginaire;
        return res;
    }
    //----------------------------------------------
    Complex operator*(Complex c)
    {
        Complex res;
        res.reel = (c.real() * reel) - imaginaire * c.imag();
        res.imaginaire = reel * c.imag() + imaginaire * c.reel;
        return res;
    }
    //----------------------------------------------
    int operator!=(Complex c)
    {
        if (c.imag() == imaginaire && c.real() == reel)
            return 0;
        else
            return 1;
    }

    //----------------------------------------------
    int operator==(Complex c)
    {
        if (c.imag() == imaginaire && c.real() == reel)
            return 1;
        else
            return 0;
    }
    //----------------------------------------------
    // Magnitude of Square of a complex number
    double norm()
    {
        double res;
        res = imaginaire * imaginaire + reel * reel;
        return res;
    }
    // Complex number angle
    double arg()
    {
        double res = 0;
        res = atan(imaginaire / reel);
        return res;
    }

    // convert polar to Complex nimber
    Complex polar(double mag, double angle = 0)
    {
        Complex c(mag * cos(angle), mag * sin(angle));
        return c;
    }
    //----------------------------------------------
    Complex operator/(Complex c)
    {
        Complex res;
        res.reel = (c.real() * reel + c.imag() * imaginaire) / (c.imag() * c.imag() + c.real() * c.real());
        res.imaginaire = (c.real() * imaginaire + c.imag() * reel) / (c.imag() * c.imag() + c.real() * c.real());
        return res;
    }
    //----------------------------------------------
    //----------------------------------------------
    // Friends
    //----------------------------------------------
    //----------------------------------------------
    friend ostream &operator<<(ostream &, Complex &);
    friend istream &operator>>(istream &, Complex &);
    friend Complex operator*(double, Complex);
    friend Complex operator+(Complex, double);
    friend Complex operator*(Complex, double);
    friend Complex operator/(double, Complex);
    friend Complex operator/(Complex, double);
    friend Complex operator-(double, Complex);
    friend Complex operator-(Complex, double);
    friend Complex operator+(double, Complex);
    friend Complex operator+(Complex, double);
};
ostream &operator<<(ostream &os, Complex &c)
{
    os << "The Complex object is : " << c.reel << " + " << c.imaginaire << "i " << endl;
    return os;
}
istream &operator>>(istream &in, Complex &c)
{
    cout << "Enter Real Part ";
    in >> c.reel;
    cout << "Enter Imaginary Part ";
    in >> c.imaginaire;
    return in;
}
Complex operator+(double d, Complex c)
{
    Complex res;
    res.reel = c.real() + d;
    res.imaginaire = c.imag() + d;
    return res;
}
Complex operator+(Complex c, double d)
{
    Complex res;
    res.reel = c.real() + d;
    res.imaginaire = c.imag() + d;
    return res;
}
Complex operator-(double d, Complex c)
{
    Complex res;
    res.reel = c.real() - d;
    res.imaginaire = c.imag() - d;
    return res;
}
Complex operator-(Complex c, double d)
{
    Complex res;
    res.reel = c.real() - d;
    res.imaginaire = c.imag() - d;
    return res;
}
Complex operator*(Complex c, double d)
{
    Complex res;
    res.reel = (c.real() * d) - d * c.imag();
    res.imaginaire = d * c.imag() + d * c.reel;
    return res;
}
Complex operator*(double d, Complex c)
{
    Complex res;
    res.reel = (c.real() * d) - d * c.imag();
    res.imaginaire = d * c.imag() + d * c.reel;
    return res;
}
Complex operator/(double d, Complex c)
{
    Complex res;
    res.reel = (c.real() * d + c.imag() * d) / (c.imag() * c.imag() + c.real() * c.real());
    res.imaginaire = (c.real() * d + c.imag() * d) / (c.imag() * c.imag() + c.real() * c.real());
    return res;
}
Complex operator/(Complex c, double d)
{
    Complex res;
    res.reel = (c.real() * d + c.imag() * d) / (c.imag() * c.imag() + c.real() * c.real());
    res.imaginaire = (c.real() * d + c.imag() * d) / (c.imag() * c.imag() + c.real() * c.real());
    return res;
}
int main()
{
    Complex c1;
    cin >> c1;
    cout << c1 << endl;
    // angle of magnitude
    cout << "Angle φ  = " << c1.arg() << endl;
    // Polar to Complex
    Complex c2 = c1.polar(2, 0.93);
    cout << c2 << endl;
    // Multiplication
    Complex c3 = c2 * c1;
    cout << c3 << endl;
    // devision
    Complex c4 = c2 / c1;
    cout << c4 << endl;
    // addition
    Complex c5 = c2 + c1;
    cout << c5 << endl;
    // soustraction
    Complex c6 = c2 - c1;
    cout << c6 << endl;
    return 0;
}