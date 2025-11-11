#include <iostream>
#include <iomanip>

using namespace std;

class Complex
{
    public:
        Complex(double = 0.0, double = 0.0); // constructor
        Complex operator+(const Complex &) const; // addition
        Complex operator*(const Complex &) const; // multiplication
        bool operator== (const Complex &) const; //comparison

        friend ostream &operator << (ostream &, const Complex &);
        friend istream &operator >> (istream &, Complex &);
    private:
        double real; // real part
        double imaginary; // imaginary part
};

ostream &operator <<(ostream &out, const Complex &complex){
    out << std::fixed << std::setprecision(2);
    out << "(" << complex.real << ", " << complex.imaginary << ")";
    return out;
}

istream &operator >> (istream &in, Complex &complex){
    cout << "Enter real and imaginary numbers: ";
    in >> complex.real >> complex.imaginary;
    return in;
}

Complex Complex::operator+(const Complex & complex) const{
    return(Complex(real + complex.real, imaginary + complex.imaginary));
}

Complex Complex::operator*(const Complex & complex) const{
    return Complex(real * complex.real, imaginary * complex.imaginary);
}

bool Complex::operator== (const Complex & complex) const {
    if(real == complex.real && imaginary == complex.imaginary){
        return true;
    } else {
        return false;
    }
}

Complex::Complex(double x, double y): real(x),imaginary(y) { }

int main()
{
   Complex complex1(0,0), complex2(4,5);
   cout << complex1 << endl;
   cin >> complex1;
   cout << complex1 << endl;;

   Complex complex3 = complex1.operator+(complex2);
   cout << "Combination of complex 1 and 2: ";
   cout << complex3 << endl;

   Complex complex4 = complex1.operator*(complex2);
   cout << "Multiplication of complex 1 and 2: ";
   cout << complex4 << endl;

   bool check = complex1 == complex2;
   cout << "Comparison of complex 1 and 2: ";
   cout << check << endl;;
    return 0;
}
