#include <iostream>
#include <math.h>

using namespace std;

int main () {
    while (true) {
        int n;
        cin >> n;

        if (n == 0) break;

        double m = 0;
        int s[n];
        for (int i = 0; i < n; i++) {
            cin >> s[i];
            m += s[i];
        }
        m /= n;

        double a = 0;
        for (int i = 0; i < n; i++) {
            a += pow(s[i] - m, 2);
        }
        a /= n;
        
        cout << fixed << sqrt(a) << endl;
    }
}