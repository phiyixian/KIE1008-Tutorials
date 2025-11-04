#ifndef DAYTYPE_H
#define DAYTYPE_H
#include <string>  // Add this line to use the std::string class
#include <iostream> // Add this line to use std::cout and std::endl

/*
. Design and implement a class dayType that implements the day of the week in a program.
The class dayType should store the day, such as Sun for Sunday. The program should be
able to perform the following operations on an object of type dayType:
a) Set the day.
b) Print the day.
c) Return the day.
d) Return the next day.
e) Return the previous day.
f) Calculate and return the day by adding certain days to the current day.
For example, if the current day is Monday and we add 4 days, the day to be
returned is Friday. Similarly, if today is Tuesday and we add 13 days, the day to be
returned is Monday.
g) Add the appropriate constructors.
*/

class dayType
{
    public:
        dayType() {
            days[0] = "Sunday";
            days[1] = "Monday";
            days[2] = "Tuesday";
            days[3] = "Wednesday";
            days[4] = "Thursday";
            days[5] = "Friday";
            days[6] = "Saturday";
        };
        void setDay(std::string newDay);
        void printDay();
        int showDay(int& day);
        int nextDay(int day);
        int prevDay(int day);
        int calcDay(int addDays, int numDays);

    private:
        std::string days[7];
        std::string currentDay;
        int numDays;
};

#endif // DAYTYPE_H
