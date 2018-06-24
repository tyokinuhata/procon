#include <iostream>
#include <string>

using namespace std;

int main () {
    while (true) {
        string str;
        cin >> str;
        
        if (str == "-") break;

        int m;
        cin >> m;
        for (int i = 0; i < m; i++) {
            int h;
            cin >> h;

            string head = str.substr(0, h);
            string tail = str.substr(h);
            str = tail + head;
        }

        cout << str << endl;
    }
}