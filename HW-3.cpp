#include <iostream>
using namespace std;

int () {
    int startCode, endCode;

    while (true) {
        if (!(cin >> startCode)) return 0;
        if (startCode >= 50 && startCode <= 120) break;
    }

    while (true) {
        if(!(cin >> endCode)) return 0;
        if(endCode >= 50 && endCode <= 120 && endCode >= startCode) break;
    }

    int count = 0;
    for (int i = startCode; i <= endCode; ++i) {
        cout << i << "=" << char(i) << "' ";
        count++;

        if (count == 6) {
            cout << endl;
            count = 0;
        }
    }

    return 0;

}