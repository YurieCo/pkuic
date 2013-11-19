#include <iostream>

using namespace std;

int main() {
    int n, i, j, num, left, top, right, bottom, count = 0;
    cin >> n;
    int a[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (i = 1; i < n - 1; i++) {
        for (j = 1; j < n - 1; j++) {
            num = a[i][j];
            left = a[i - 1][j] - num;
            right = a[i + 1][j] - num;
            top = a[i][j - 1] - num;
            bottom = a[i][j + 1] - num;
            if (left >= 50 && top >= 50 && right >= 50 && bottom >= 50) {
                count += 1;
            }
        }
    }
    cout << count << endl;
    return 0;
}
