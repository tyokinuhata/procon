#include <iostream>
#include <math.h>

using namespace std;

int main () {
    int n;
    cin >> n;

    int x[n], y[n];
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) cin >> y[i];

    double p1, p2, p3, pInf;
    p1 = p2 = p3 = pInf = 0;
    for (int i = 0; i < n; i++) {
        p1 += fabs(x[i] - y[i]);
        p2 += pow(fabs(x[i] - y[i]), 2);
        p3 += pow(fabs(x[i] - y[i]), 3);
        pInf = max(pInf, fabs(x[i] - y[i]));
    }

    cout << fixed << p1 << endl << sqrt(p2) << endl << cbrt(p3) << endl << pInf << endl;
}