#include <iostream>

using namespace std;

int sumDigits (int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main () {
    int n, a, b;
    cin >> n >> a >> b;

    int sum, total = 0;
    for (int i = 1; i <= n; i++) {
        sum = sumDigits(i);
        if (sum >= a && sum <= b) total += i;
    }

    cout << total << endl;
}