#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main () {
    char x[1001];

    while (true) {
        scanf("%s", x);

        if (x[0] == '0') break;

        int sum = 0;
        for (int i = 0; i < strlen(x); i++) {
            sum += (x[i] - '0');
        }

        cout << sum << endl;
    }
}