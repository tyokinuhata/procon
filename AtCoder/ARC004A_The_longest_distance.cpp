#include <iostream>
#include <math.h>

using namespace std;

int main () {
    int n, x[100], y[100];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    double distance, max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            distance = sqrt(pow(x[j] - x[i], 2) + pow(y[j] - y[i], 2));
            if (distance > max) max = distance;
        }
    }

    cout << max << endl;
}