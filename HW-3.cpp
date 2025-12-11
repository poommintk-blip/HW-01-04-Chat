#include <iostream>
using namespace std;

int main() {
    int startCode, endCode;
    while (true) {
        cin >> startCode;
        if (startCode >= 50 && startCode <= 120) {
            break;
        }
    }
    while (true) {
        cin >> endCode;
        if (endCode >= 50 && endCode <= 120 && endCode >= startCode) {
            break;
        }
    }

    int count = 0;
    for (int i = startCode; i <= endCode; i++) {
        cout << i << "='" << (char)i << "' "; 
        count++;
        
        if (count % 6 == 0) {
            cout << endl;
        }
    }
    
    return 0;
}