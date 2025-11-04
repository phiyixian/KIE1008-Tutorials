#include "dayType.h"
#include <string>  // Add this line to use the std::string class
#include <iostream> // Add this line to use std::cout and std::endl

void dayType::setDay(std::string newDay) {
    currentDay = newDay;
};

void dayType::printDay() {
    std::cout << currentDay << std::endl;
};

int dayType::showDay(int& day){
    return day;
}

int dayType::nextDay(int day){
    int cday = day + 1;

    std::cout << "Next day number: " << cday << std::endl;
    switch (cday) {
        case 7: std::cout << "The next day is Sunday." << std::endl;
        break;
        case 1: std::cout << "The next day is Monday." << std::endl;
        break;
        case 2: std::cout << "The next day is Tuesday." << std::endl;
        break;
        case 3: std::cout << "The next day is Wednesday." << std::endl;
        break;
        case 4: std::cout << "The next day is Thursday." << std::endl;
        break;
        case 5: std::cout << "The next day is Friday." << std::endl;
        break;
        case 6: std::cout << "The next day is Saturday." << std::endl;
        break;
    }

    return cday;
}

int dayType::prevDay(int day){
    day = day--;
    switch (day) {
        case 0: std::cout << "The previous day is Sunday." << std::endl;
        break;
        case 1: std::cout << "The previous day is Monday." << std::endl;
        break;
        case 2: std::cout << "The previous day is Tuesday." << std::endl;
        break;
        case 3: std::cout << "The previous day is Wednesday." << std::endl;
        break;
        case 4: std::cout << "The previous day is Thursday." << std::endl;
        break;
        case 5: std::cout << "The previous day is Friday." << std::endl;
        break;
        case -1: std::cout << "The previous day is Saturday." << std::endl;
        break;
    }

    return day;
}

int dayType::calcDay(int addDays, int numDays){
    addDays = addDays + numDays;
    if (addDays > 6) {
        addDays = addDays % 7;
    }
    switch (addDays) {
        case 0: std::cout << "The calculated day is Sunday." << std::endl;
        break;
        case 1: std::cout << "The calculated day is Monday." << std::endl;
        break;
        case 2: std::cout << "The calculated day is Tuesday." << std::endl;
        break;
        case 3: std::cout << "The calculated day is Wednesday." << std::endl;
        break;
        case 4: std::cout << "The calculated day is Thursday." << std::endl;
        break;
        case 5: std::cout << "The calculated day is Friday." << std::endl;
        break;
        case 6: std::cout << "The calculated day is Saturday." << std::endl;
        break;
    };

    return addDays;
}
