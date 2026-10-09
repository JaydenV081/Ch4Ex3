/*
Developer: Jayden Veloz
File Name: Ch4Ex3.cpp
Date: 10 / 9 / 26

Requirements:
The date June 10, 1960, is special because when we write it in the following format, the month times
the day equals the year.

6/10/60

Write a program that asks the user to enter a month (in numeric form), a day, and a two-digit year.
The program should then determine whether the month times the day is equal to the year. If so, it
should display a message saying the date is magic. Otherwise, it should display a message saying
the date is not magic. Test your program with some dates that are magic and some that are not.

Input Validation: Think about what legal values the program should accept for month and day.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int month, day, year;
    // ---- DATE ---- //
    // Month
    cout << "Please enter a month (in numeric form): ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Invalid month. Please restart" << endl;
        return 0;
    }

    // Day
    cout << "Please enter a day: ";
    cin >> day;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (day < 1 || day > 31) {
            cout << "Invalid day. Please restart" << endl;
            return 0;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day < 1 || day > 30) {
            cout << "Invalid day. Please restart" << endl;
            return 0;
        }
    } else if (month == 2) {
        if (day < 1 || day > 29) {
            cout << "Invalid day. Please restart" << endl;
            return 0;
        }
    }

    // Year
    cout << "Please enter a year (last two digits): ";
    cin >> year;

    if (year < 0 || year > 99) {
        cout << "Invalid year. Please restart" << endl;
        return 0;
    }

    // Feb 29 is invalid if not a leap year (every 4 yrs)
    if (month == 2 && day == 29 &&  year%4 != 0) {
        cout << "Invalid year. This is not a leap year. Please restart" << endl;
        return 0;
    }

    // ---- MAGIC ---- //
    if ((month * day) == year) {
        // Adds 0 if single digit year
        if (year < 10) {
            cout << "Wow! The following date: " << month << "/" << day << "/0" << year << " is *MAGICAL*" << endl;
        } else {
            cout << "Wow! The following date: " << month << "/" << day << "/" << year << " is *MAGICAL*" << endl;
        }
    } else {
        // Adds 0 if single digit year
        if (year < 10) {
            cout << "Aww... The following date: " << month << "/" << day << "/0" << year << " is just a normal day. No magic..." << endl;
        } else {
            cout << "Aww... The following date: " << month << "/" << day << "/" << year << " is just a normal day. No magic..." << endl;
        }
    }

    return 0;
}
