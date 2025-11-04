#include <iostream>

using namespace std;

class yClass
{
    public:
        void one();
        yClass();
    private:
        int a;
        int b;
};

class xClass
{
    public:
        void two();
        xClass();
    private:
        int z;
};

# a and b are private variables
void yClass::one()
{
    cout << a + b << endl;
}

# a and b are private variables for y class
void xClass::two()
{
    a = 10;
    b = 15;
    z = 30;
    cout << a + b + z << endl;
}

# a, b, z are private members, cannot access externally
int main()
{
    yClass y;
    xClass x;
    cout << y.a << " " << y.b << " " << x.z << endl;
}



