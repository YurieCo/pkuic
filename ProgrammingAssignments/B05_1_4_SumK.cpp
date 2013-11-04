#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n], i, j;
    bool hasSumK = false;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (a[i] + a[j] == k) {
                hasSumK = true;
            }
        }
    }
    if (hasSumK) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}
