### Question 1 ###
#include <iostream>

using namespace std;

class student
{
    public:
        bool canGraduate();
        void const print();
        student(int ID = 0, double gpa = 0);
    private:
        int ID;
        double gpa;
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

### Question 2 ###
