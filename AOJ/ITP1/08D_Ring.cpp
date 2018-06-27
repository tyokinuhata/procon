#include <iostream>
#include <string.h>

using namespace std;

int main () {
    char s[201], p[101], t[101];
    cin >> s >> p;
    strcpy(t, s);
    strcat(s, t);
    cout << (strstr(s, p) == NULL ? "No" : "Yes") << endl;
}