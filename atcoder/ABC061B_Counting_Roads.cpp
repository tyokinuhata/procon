#include <iostream>

using namespace std;

int main () {
    int n, m;
    cin >> n >> m;

    int a[m], b[m];
    for (int i = 0; i < m; i++) cin >> a[i] >> b[i];

    int road[60] = {0};
    for (int i = 0; i < m; i++) {
        road[a[i] - 1]++;
        road[b[i] - 1]++;
    }

    for (int i = 0; i < n; i++) {
        cout << road[i] << endl;
    }
}