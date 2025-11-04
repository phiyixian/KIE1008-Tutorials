#include <iostream>
#include "dayType.h"

using namespace std;

int main()
{
    dayType userDay;
    int currentDay;
    int addDays;
    int test;
    string day;

    cout << "*****Please enter a day of the week*****" << endl;
	cout << "0 for Sunday" << endl;
	cout << "1 for Monday" << endl;
	cout << "2 for Tuesday" << endl;
	cout << "3 for Wednesday" << endl;
	cout << "4 for Thursday" << endl;
	cout << "5 for Friday" << endl;
	cout << "6 for Saturday" << endl;
	cout << "9 to exit" << endl;

	cin >> currentDay;
	cout << endl;

	switch (currentDay) {
    case 0:
        userDay.setDay("Sunday");
        break;
    case 1:
        userDay.setDay("Monday");
        break;
    case 2:
        userDay.setDay("Tuesday");
        break;
    case 3:
        userDay.setDay("Wednesday");
        break;
    case 4:
        userDay.setDay("Thursday");
        break;
    case 5:
        userDay.setDay("Friday");
        break;
    case 6:
        userDay.setDay("Saturday");
        break;
	};

	userDay.printDay();
	userDay.showDay(currentDay);
	cout << endl;
	userDay.nextDay(currentDay);
	cout << endl;
	userDay.prevDay(currentDay);
	cout << endl;

	cout << "Enter the number of days to add: " << endl;
	cin >> addDays;
	cout << endl;

	userDay.calcDay(currentDay, addDays);
	cout << endl;

    return 0;
}
