#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

string toUpper(string str) {
    for (int i = 0; i < str.size(); i++) str[i] = toupper(str[i]);
    return str;
}

int main () {
    string w, t;
    int cnt = 0;

    cin >> w;
    w = toUpper(w);
    while (true) {
        cin >> t;
        if (t == "END_OF_TEXT") break;

        t = toUpper(t);
        if (t == w) cnt++;
    }

    cout << cnt << endl;
}