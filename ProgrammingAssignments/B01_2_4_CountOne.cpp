#include <iostream>
using namespace std;

int main() {
    int num, i;
    cin >> num;
    int cases[num];
    for (i = 0; i < num; i++) {
        cin >> cases[i];
    }

    for (i = 0; i < num; i++) {
        int count = 0;
        int n = cases[i];
        while(n >= 1) {
            if(n % 2 == 1){
                count++;
            }
            n = n / 2;
        }
        cout << count << endl;
    }
}
