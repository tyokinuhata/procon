#include <iostream>
#include <string>

using namespace std;

int main () {
    string s;
    cin >> s;

    int alphabet[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        alphabet[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (!alphabet[i]) {
            cout << (char)(i + 'a') << endl;
            return 0;
        }
    }

    cout << "None" << endl;
}