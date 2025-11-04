#include <iostream>

using namespace std;

class myClass
{
    public:
    //Function to output x.
        void printX() const;
        //Function to output count.
        void printCount();
        //Function to increment count.
        void incrementCount();
        //constructor with default parameters
        //Postcondition set x as a;
        myClass(int a = 0);
    private:
        int x;
        int count;
};

myClass::myClass(int a) {
    x = a;
}

void myClass::printX() const {
    cout << x << endl;
}

void myClass::printCount() {
    cout << count << endl;
}

void myClass::incrementCount() {
    count++;
}

int main()
{
    myClass myObject1(5);
    myClass myObject2(7);

    myObject1.printX();
    cout << endl;
    myObject1.incrementCount();
    myObject1.printCount();
    cout << endl;
    myObject2.printCount();
    cout << endl;
    myObject2.printX();
    cout << endl;

    return 0;
}
