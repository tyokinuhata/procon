#include <iostream>
#include <math.h>

using namespace std;

int main () {
    double a, b, c;
    cin >> a >> b >> c;

    c = c / 180 * M_PI;
    double s = a * b * sin(c) / 2;
    double l = a + b + sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(c));
    double h = b * sin(c);
    
    cout << fixed << s << endl << l << endl << h << endl;
}