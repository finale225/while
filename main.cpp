#include <iostream>
using namespace std;

int main() {
    int n, en, n10, n1, count = 0;
    cin >> n;
    en = n;
    if (n > 99 || n < 0) return 0;
    while (true) {
        n10 = n / 10;
        n1 = n % 10;
        n = (n1*10) + (n10 + n1) % 10;
        count++;
        if (n == en) break;
    }
    cout << count;
}