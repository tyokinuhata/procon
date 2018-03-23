#include <iostream>
#include <string>

using namespace std;

int main () {
    int n;
    int l[100000], r[100000];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += r[i] - l[i] + 1;
    }

    cout << cnt << endl;
}