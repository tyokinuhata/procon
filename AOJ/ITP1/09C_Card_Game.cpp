#include <iostream>
#include <string>

using namespace std;

int main () {
    int n;
    cin >> n;

    int taro = 0, hanako = 0;

    for (int i = 0; i < n; i++) {
        string animal1, animal2;
        cin >> animal1 >> animal2;

        if (animal1 > animal2) taro += 3;
        else if (animal1 < animal2) hanako += 3;
        else {
            taro++;
            hanako++;
        }
    }

    cout << taro << ' ' << hanako << endl;
}