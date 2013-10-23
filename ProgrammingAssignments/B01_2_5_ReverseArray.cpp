#include <iostream>
using namespace std;

int main() {
    int num, i, temp;
    cin >> num;
    int cases[num];
    for (i = 0; i < num; i++) {
        cin >> cases[i];
    }
    
    for (i = 0; i < num / 2; i++) {
        temp = cases[i];
        cases[i] = cases[num - i - 1];
        cases[num - i - 1] = temp;
    }

    for (i = 0; i < num; i++) {
        cout << cases[i] << " ";
    }
}
