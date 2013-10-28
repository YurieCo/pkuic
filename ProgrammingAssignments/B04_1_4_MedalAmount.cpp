#include <iostream>

using namespace std;

int main() {
    int n, i;
    cin >> n;
    int gold[n],
        silver[n],
        bronze[n],
        gold_sum = 0,
        silver_sum = 0,
        bronze_sum = 0;
    for (i = 0; i < n; i++) {
        cin >> gold[i];
        cin >> silver[i];
        cin >> bronze[i];
        gold_sum += gold[i];
        silver_sum += silver[i];
        bronze_sum += bronze[i];
    }
    cout << gold_sum << " " << silver_sum << " " << bronze_sum << " ";
    cout << gold_sum + silver_sum + bronze_sum << endl;
}
