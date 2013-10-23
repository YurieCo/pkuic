#include <iostream>
using namespace std;
int main() {
    int k, i;
    cin >> k;
    int a[k];
    int count_one = 0, count_five = 0, count_ten = 0;
    for (i = 0; i < k; i++) {
        cin >> a[i];
    }

    for (i = 0; i < k; i++) {
        if (a[i] == 1) {
            count_one++;
        }
        if (a[i] == 5) {
            count_five++;
        }
        if (a[i] == 10) {
            count_ten++;
        }
    }
    cout << count_one << endl;
    cout << count_five << endl;
    cout << count_ten << endl;

}
