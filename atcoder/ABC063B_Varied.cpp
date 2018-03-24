#include <iostream>
#include <string>

using namespace std;

int main () {
    string s;
    cin >> s;

    bool flag = false;
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < s.size(); j++) {
            if (i != j && s[i] == s[j]) {
                flag = true;
            }
        }
    }

    if (flag == true) cout << "no" << endl;
    else cout << "yes" << endl;
}