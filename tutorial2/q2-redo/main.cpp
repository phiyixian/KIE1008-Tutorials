#include <iostream>

using namespace std;

class dayType {
private:
    std::string days[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    std::string currentDay;
public:
    void setDay(int day){
        currentDay = days[day];
    }
    void printDay() {
        std::cout << currentDay << std::endl;
    }
    void nextDay(int day) {
        std::cout << days[(day + 1)%7] << std::endl;
    }
    void prevDay(int day) {
        int p = day - 1;
        if (p == -1){
            p = 6;
        }
        std::cout << days[p] << std::endl;
    }
};

int main()
{
    dayType week;
    int day = 0;
    std::cin >> day;
    std::cout << std::endl;

    week.setDay(day);
    week.printDay();
    week.nextDay(day);
    week.prevDay(day);
    return 0;
}
