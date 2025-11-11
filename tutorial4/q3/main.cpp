#include <iostream>

using namespace std;

class Rational{
    public:
        Rational(int n = 1, int d = 1);
        Rational operator-(const Rational & rhs);
        friend ostream &operator  <<(ostream&, const Rational &);
        friend istream &operator  >>(istream&, const Rational &);
    private:
        int numerator;
        int denominator;
};

Rational::Rational(int n, int d){
    if (d == 0) {
        throw std::runtime_error("Division by zero is not allowed.");
    } else{
        numerator = n;
        denominator = d;
    }
}

ostream &operator  <<(ostream& out, const Rational & rational){
    out << rational.numerator << "/" << rational.denominator << endl;
}

Rational Rational::operator-(const Rational & rhs){
    return (((numerator * rhs.denominator)-(denominator * rhs.numerator)), (denominator * rhs.denominator));
}

int main()
{
    Rational rational1(2,5), rational2(3,5);
    cout << rational1 << endl;
    cout << rational2 << endl;
    cout << rational2 - rational1 << endl;
    return 0;
}
