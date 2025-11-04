#include <iostream>

using namespace std;

class discover
{
    public:
        set(string, int, double);
        void print() const;
        discover(string, int, double);
        // cannot have double declaration
    private:
        string type;
        int l;
        double w;
}; // Need to add ; by the end of class


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
