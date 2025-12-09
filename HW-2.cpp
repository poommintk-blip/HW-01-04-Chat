#include <iostream>
using namespace std;

int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeap(int year){
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int dayOfYear(int d, int m, int year){
    int sum = d;

    for(int i = 1; i < m; i++){
        sum += daysInMonth[i - 1];
    }

    if(isLeap(year) && m > 2) sum += 1;

    return sum;
}

int main(){
    int year;
    int d1, m1, d2, m2;

    cin >> year;
    cin >> d1 >> m1;
    cin >> d2 >> m2;

    int start = dayOfYear(d1, m1, year);
    int end   = dayOfYear(d2, m2, year);

    cout << end - start << endl;

    return 0;
}
