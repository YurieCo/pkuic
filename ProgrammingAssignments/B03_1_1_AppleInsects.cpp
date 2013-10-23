#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, x, y, left;
    float ate;
    cin >> n;
    cin >> x;
    cin >> y;
    ate = y / x;
    if (y % x == 0){
        left = n - ate;
    } else {
        left = n - ate - 1;
    }
    cout << left;
    return 0;
}
