#include <iostream>
#include <string>

using namespace std;

int main () {
    int n, a;
    cin >> n >> a;

    cout << (n % 500 <= a ? "Yes" : "No") << endl;
}