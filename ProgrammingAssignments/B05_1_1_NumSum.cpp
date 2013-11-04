#include <iostream>

using namespace std;

int main() {
    int a, x, sum = 0;
    cin >> a;
    for (int i = 0; i < 5; i++) {
        cin >> x;
        if (x < a) {
            sum += x;
        }
    }
    cout << sum << endl;
    return 0;
}
