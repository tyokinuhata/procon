#include <iostream>

using namespace std;

int maxCoord (int a[], int n) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > max) max = a[i];
    }
    return max;
}

int minCoord (int a[], int n) {
    int min = 1000;
    for (int i = 0; i < n; i++) {
        if (a[i] < min) min = a[i];
    }
    return min;
}

int main () {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = maxCoord(a, n);
    int min = minCoord(a, n);

    cout << max - min << endl;
}