#include <iostream>
#include <string>

using namespace std;

int main () {
    string s;
    cin >> s;

    int begin;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') {
            begin = i;
            break;
        }
    }

    int end;
    for (int i = s.size() - 1; i > begin; i--) {
        if (s[i] == 'Z') {
            end = i;
            break;
        }
    }

    cout << end - begin + 1 << endl;
}