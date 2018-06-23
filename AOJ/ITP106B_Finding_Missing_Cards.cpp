#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;

    bool cards[4][13];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 13; j++) cards[i][j] = false;

    char suit;
    int rank;
    for (int i = 0; i < n; i++) {
        cin >> suit >> rank;

        if (suit == 'S') cards[0][rank - 1] = true;
        else if (suit == 'H') cards[1][rank - 1] = true;
        else if (suit == 'C') cards[2][rank - 1] = true;
        else if (suit == 'D') cards[3][rank - 1] = true;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            if (!cards[i][j]) {
                if (i == 0) suit = 'S';
                else if (i == 1) suit = 'H';
                else if (i == 2) suit = 'C';
                else if (i == 3) suit = 'D';
                cout << suit << ' ' << j + 1 << endl;
            }
        }
    }
}