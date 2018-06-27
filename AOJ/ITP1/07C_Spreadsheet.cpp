#include <iostream>

using namespace std;

int main () {
    int r, c;
    cin >> r >> c;

    int rc[r + 1][c + 1];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) cin >> rc[i][j];
    
    for (int i = 0; i < r + 1; i++) rc[i][c] = 0;
    for (int i = 0; i < c + 1; i++) rc[r][i] = 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            rc[i][c] += rc[i][j];
            rc[r][j] += rc[i][j];
            rc[r][c] += rc[i][j];
        }
    }

    for (int i = 0; i <= r; i++) {
        for (int j = 0; j <= c; j++) {
            if (j) cout << ' ';
            cout << rc[i][j];
        }
        cout << endl;
    }
}