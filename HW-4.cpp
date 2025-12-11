#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;

    while (true) {
        cin >> a;
        if (a >= 1 && a <= 10000) break;
    }

    while (true) {
        cin >> b;
        if (b >= 1 && b <= 10000 && b >= a) break;
    }

    int count = 0;
    bool first = true;

    for (int i = a; i <= b; ++i) {
        if (isPrime(i)) {
            if (!first) cout << " ";
            cout << i;
            first = false;
            ++count;
        }
    }

    cout << "\n" << count << endl;

    return 0;
}