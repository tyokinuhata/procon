#include <iostream>

using namespace std;

int main () {
    int n, m, l;
    cin >> n >> m >> l;

    int a[n][m], b[m][l];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) cin >> a[i][j];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < l; j++) cin >> b[i][j];

    long long c[n][l];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            c[i][j] = 0;
            for (int k = 0; k < m; k++) c[i][j] += a[i][k] * b[k][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            if (j) cout << ' ';
            cout << c[i][j];
        }
        cout << endl;
    }
}