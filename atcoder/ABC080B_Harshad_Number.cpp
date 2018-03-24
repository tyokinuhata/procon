#include <iostream>

using namespace std;

int f (int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main () {
    int n;
    cin >> n;

    if (n % f(n) == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}