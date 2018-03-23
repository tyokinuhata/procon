#include <iostream>
#include <string>

using namespace std;

int main () {
    int n;
    cin >> n;

    int k[] = { 1, 2, 4, 8, 16, 32, 64 };
    int i = 6;
    while (true) {
        if (k[i] <= n) break;
        i--;
    }

    cout << k[i] << endl;
}