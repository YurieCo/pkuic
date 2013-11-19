#include <iostream>
#include <iomanip>

using namespace std;

int test_range(int m, int n) {
    if (n > 4 || n < 0 || m > 4 || m < 0) {
        return 0; 
    }
    return 1;
}

int main() {
    int a[5][5];
    int i, j, m, n, temp;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cin >> a[i][j];
        }
    }
    cin >> m;
    cin >> n;
    if(test_range(m, n)){
        for (i = 0; i < 5; i++) {
            temp = a[m][i];
            a[m][i] = a[n][i];
            a[n][i] = temp;
        }
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                cout << setw(4) << a[i][j];
            }
            cout << endl;
        }
    } else {
        cout << "error" << endl;
    }

    return 0;
}
