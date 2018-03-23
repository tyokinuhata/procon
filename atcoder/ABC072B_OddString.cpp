#include <iostream>
#include <string>

using namespace std;

int main () {
    string s;
    cin >> s;

    string res = "";
    for (int i = 0; i < s.size(); i++) {
        if ((i + 1) % 2 != 0) res += s[i];
    }

    cout << res << endl;
}