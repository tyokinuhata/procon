#include <iostream>

using namespace std;

class Dice {
    public:
    int face[6];
    Dice() {}
    void rotateX () {
        rotate(0, 1, 5, 4);
    }
    void rotateY () {
        rotate(0, 2, 5, 3);
    }
    void rotateZ () {
        rotate(1, 2, 4, 3);
    }
    void rotate (int a, int b, int c, int d) {
        int t = face[a];
        face[a] = face[b];
        face[b] = face[c];
        face[c] = face[d];
        face[d] = t;
    }
};

bool eq(Dice d1, Dice d2) {
    for (int i = 0; i < 6; i++)
        if (d1.face[i] != d2.face[i]) return false;
    return true;
}

bool equal(Dice d1, Dice d2) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            if (eq(d1, d2)) return true;
            d1.rotateZ();
        }
        if (i % 2 == 0) d1.rotateY();
        else d1.rotateX();
    }
    return false;
}

Dice d[100];
int n;

bool check () {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++) if (equal(d[i], d[j])) return false;
    return true;
}

int main () {
    cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < 6; j++) cin >> d[i].face[j];
    
    if (check()) cout << "Yes" << endl;
    else cout << "No" << endl;
}