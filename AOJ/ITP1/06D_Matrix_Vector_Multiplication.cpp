#include <iostream>

using namespace std;

int main () {
    int n, m;
    cin >> n >> m;

    int a[n][m], b[m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) cin >> a[i][j];
    for (int i = 0; i < m; i++) cin >> b[i];

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) sum += a[i][j] * b[j];
        cout << sum << endl;
        sum = 0;
    }
}