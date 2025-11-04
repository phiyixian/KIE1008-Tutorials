#include <iostream>

using namespace std;

class romanType
{
public:
    void convert();
    void printRoman();
    void printNumber();
    int refer(char a);
    romanType(string in = "");
private:
    string roman;
    string number;
};

void romanType::printNumber() {
    cout << number << endl;
}

void romanType::printRoman() {
    cout << roman << endl;
}

romanType::romanType(string in) {
    roman = in;
}

int romanType::refer(char a) {
    switch(a){
    case 'M':
        return 1000;
    case 'D':
        return 500;
    case 'C':
        return 100;
    case 'L':
        return 50;
    case 'X':
        return 10;
    case 'V':
        return 5;
    case 'I':
        return 1;
    }

}

void romanType::convert() {
    int total = 0;

    for (int i = roman.length() - 1; i >= 0; i--) {
        int curr = refer(roman[i]);
        if (curr < prev) {
            total -= curr;
        } else {
            total += curr;
        }
        prev = curr;
    }

    number = to_string(total);
}


int main()
{
    romanType testing("MCXIV");
    testing.printRoman();
    testing.convert();
    testing.printNumber();

    return 0;
}
