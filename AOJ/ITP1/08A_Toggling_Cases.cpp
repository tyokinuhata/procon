#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main () {
    char c;
    while (true) {
        scanf("%c", &c);

        if (isalpha(c)) {
            if (islower(c)) cout << (char)toupper(c);
            else cout << (char)tolower(c);
        } else cout << c;

        if (c == '\n') break;
    }
}