#include <iostream>
#include <string>

using namespace std;

int main () {
    int n;
    int a[200];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    int cnt = 0;
    while (true) {
        
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 != 0) {
                flag = true;
                break;
            }
        }

        if (flag) break;

        for (int i = 0; i < n; i++) {
            a[i] /= 2;
        }
        cnt++;
    }

    cout << cnt << endl;
}