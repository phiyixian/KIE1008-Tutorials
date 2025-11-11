#include <iostream>

using namespace std;

class myClass
{
    public:
        myClass plus(const int& obj);
        myClass(int = 0, int = 0);
    private:
        int a;
        int b;
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
