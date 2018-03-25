#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;

    int d[n];
    for (int i = 0; i < n; i++) cin >> d[i];

    int bucket[101] = {0};
    for (int i = 0; i < n; i++) bucket[d[i]]++;

    int cnt = 0;
    for (int i = 1; i <= 100; i++) {
        if (bucket[i]) cnt++;
    }

    cout << cnt << endl;
}