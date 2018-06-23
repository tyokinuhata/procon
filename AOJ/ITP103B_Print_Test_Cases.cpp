#include <iostream>

using namespace std;

int main () {
    int i = 0, x;
    while (true) {
        cin >> x;

        if (x == 0) break;

        cout << "Case " << ++i << ": " << x << endl;
    }
}