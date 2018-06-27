#include <iostream>
#include <string>

using namespace std;

int main () {
    string str;
    cin >> str;

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        string op;
        cin >> op;

        int a, b;
        cin >> a >> b;

        if (op == "print") {
            cout << str.substr(a, b - a + 1) << endl;
        } else if (op == "reverse") {
            string t = str.substr(a, b - a + 1);
            int n = t.size();
            for (int i = 0; i < n; i++) str[i + a] = t[n - i - 1];
        } else if (op == "replace") {
            string p;
            cin >> p;
            str = str.replace(a, b - a + 1, p);
        }
    }
}