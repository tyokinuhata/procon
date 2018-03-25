#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main () {
    int n, l;
    cin >> n >> l;

    string s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    sort(s, s + n);

    string str = "";
    for (int i = 0; i < n; i++) {
        str += s[i];
    }

    cout << str << endl;
}