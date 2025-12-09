#include <iostream>
using namespace std;

int main() {
    int d, m, y;

    cin >> d;   
    cin >> m;   
    cin >> y;  

    int daysInMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
        daysInMonth[1] = 29;
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
