#include <iostream>

using namespace std;

int main () {
    int a, b;

    cin >> a >> b;

    cout << a / b << ' ' << a % b << ' ' << fixed << (double)a / b << endl;
}