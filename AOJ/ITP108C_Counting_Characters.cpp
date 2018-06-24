#include <iostream>
#include <ctype.h>

using namespace std;

int main () {
    char c;
    int alpha[26] = {};
    while (cin >> c) {
        if (isalpha(c)) {
            c = tolower(c);
            alpha[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) cout << (char)(i + 'a') << " : " << alpha[i] << endl;
}