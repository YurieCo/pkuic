#include <iostream>
using namespace std;
int main() {
    int m, n, i;
    int sum = 0;
    cin >> m;
    cin >> n;
    for (i = m; i <= n; i++) {
        if(i % 2 == 1){
            sum += i;
        }
    }
    cout << sum;
    return 0;
}
