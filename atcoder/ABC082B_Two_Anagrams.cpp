#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main () {
    string s, t;
    cin >> s >> t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    reverse(t.begin(), t.end());

    if (s < t) cout << "Yes" << endl;
    else cout << "No" << endl;
}