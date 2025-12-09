#include <iostream>
using namespace std;

int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeap(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main() {
    int d, m, y;
    cin >> d >> m >> y;

    if (isLeap(y)) {
        daysInMonth[1] = 29;
    } else {
        daysInMonth[1] = 28;
    }
    d++;
    if (d > daysInMonth[m-1]) {
        d = 1;
        m++;
        if (m > 12) {
            m = 1;
            y++;
        }
    }

    cout << d << endl;
    cout << m << endl;
    cout << y << endl;

    return 0;
}
