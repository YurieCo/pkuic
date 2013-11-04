#include <iostream>

using namespace std;

int main() {
    int n, i, x, y;
    cin >> n;
    for (i = 10; i < n; i++) {
        x = i / 10;
        y = i % 10;
        if (i % (x + y) == 0) {
            cout << i << endl;
        }
    }
    return 0;
}

