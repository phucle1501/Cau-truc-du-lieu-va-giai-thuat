#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year) {
    if (month == 2) {
        if (isLeapYear(year)) {
            return 29;
        } else {
            return 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

bool isValidDate(Date date) {
    if (date.year < 1 || date.month < 1 || date.month > 12 || date.day < 1 || date.day > daysInMonth(date.month, date.year)) {
        return false;
    }
    return true;
}

Date nextDay(Date date) {
    Date nextDate = date;
    nextDate.day++;
    if (nextDate.day > daysInMonth(nextDate.month, nextDate.year)) {
        nextDate.day = 1;
        nextDate.month++;
        if (nextDate.month > 12) {
            nextDate.month = 1;
            nextDate.year++;
        }
    }
    return nextDate;
}

int main() {
    Date date;
    scanf("%d/%d/%d", &date.day, &date.month, &date.year);

    if (!isValidDate(date)) {
        cout << "INVALID" << endl;
        return 0;
    }

    Date next_date = nextDay(date);
    printf("%02d/%02d/%04d\n", next_date.day, next_date.month, next_date.year);

    return 0;
}
