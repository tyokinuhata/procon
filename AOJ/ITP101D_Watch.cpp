#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main () {
    int h, m, s;
    cin >> s;
    h = s / 3600;
    s %= 3600;
    m = s / 60;
    s %= 60;
    cout << h << ":" << m << ":" << s << endl;
}