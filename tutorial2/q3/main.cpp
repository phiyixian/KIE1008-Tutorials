/*
3. Write a program for the class clock to execute the following commands:
a) Define a class object myClock with parameters hours = 8, minutes = 12, and
seconds = 30. Print out the values on the screen.
b) Define another class object yourClock with the parameters hours = 12, minutes =
35, and seconds = 45. Print out the values on the screen.
c) Change the parameters in myClock using setTime() function with the parameters
hours = 3, minutes = 48, seconds = 52. Print out the new values of myClock.
d) Compare the values between myClock and yourClock. Print out the result.
e) Assign the values of myClock into yourClock using assignment operator (=). Print
out the new values on the screen.
f) Compare again the values between myClock and yourClock. Print out the result.
g) Increase myClock to an hour faster. Print out the result.
*/

#include <iostream>

using namespace std;

class clock {
private:
    int hours;
    int minutes;
    int seconds;
public:
    int getHours(){
        return hours;
    }
    int getMinutes(){
        return minutes;
    }
    int getSeconds(){
        return seconds;
    }
    clock(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void printTime() {
        std::cout << "Hours: " << hours << std::endl;
        std::cout << "Minutes: " << minutes << std::endl;
        std::cout << "Seconds: " << seconds << std::endl;
        std::cout <<  std::endl;
    }
    void setTime(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void compareTime(int h, int m, int s) {
        int bigger = 0;
        int newh = 0;
        int newm = 0;
        int news = 0;
        if (hours > h){
            newh = hours - h;
            bigger = hours;
        }
        else if (hours == h) {
            newh = 0;
            bigger = 0;
        }
        else {
            newh = h - hours;
            bigger = h;
        }
        std::cout << "Bigger hour = " << bigger << std::endl;

        if (bigger == hours){
            if(minutes > m){
                newm = minutes - m;
            }else if(minutes == m){
                newm = 0;
            }else {
                newm = (minutes + 60) - m;
                newh = newh - 1;
                std::cout << "Bigger hours hour but smaller minutes" << std::endl;
            }
        }else if (bigger == h){
            if(m > minutes){
                newm = m - minutes;
            }else if(minutes == m){
                newm = 0;
            }else {
                std::cout << m << std::endl;
                newm = (m + 60) - minutes;
                std::cout << newm << std::endl;
                newh = newh - 1;
                std::cout << "Bigger h hour but smaller minutes"<< std::endl;
            }
        }

        if (bigger == hours){
            if(seconds > s){
                news = seconds - s;
            }else if(seconds == s){
                news = 0;
            }else {
                news = (seconds + 60) - s;
                newm = newm - 1;
            }
        }
        else if (bigger == h){
            if(s > seconds){
                news = s - seconds;
            }else if(seconds == s){
                news = 0;
            }else {
                news = (s + 60) - seconds;
                newm = newm - 1;
            }
        }

        std::cout << "Compared hour = " << newh << std::endl;
        std::cout << "Compared minutes = " << newm << std::endl;
        std::cout << "Compared seconds = " << news << std::endl;
        std::cout <<  std::endl;
    }

    void addHour(int h){
        hours = hours + h;
    }
};
int main()
{
    clock myClock(8, 12, 30);
    clock yourClock(12, 35, 45);

    std::cout << "My Clock: " << std::endl;
    myClock.printTime();

    std::cout << "Your Clock: " << std::endl;
    yourClock.printTime();

    std::cout << "New My Clock: " << std::endl;
    myClock.setTime(3, 48, 52);
    myClock.printTime();

    std::cout << "Compare Time: " << std::endl;
    myClock.compareTime(yourClock.getHours(), yourClock.getMinutes(), yourClock.getSeconds());

    std::cout << "Your Clock = My Clock: " << std::endl;
    yourClock = myClock;
    yourClock.printTime();
    myClock.printTime();

    std::cout << "Compare Time: " << std::endl;
    myClock.compareTime(yourClock.getHours(), yourClock.getMinutes(), yourClock.getSeconds());

    std::cout << "Add Hour to My Clock: " << std::endl;
    myClock.addHour(1);
    myClock.printTime();
    return 0;
}
