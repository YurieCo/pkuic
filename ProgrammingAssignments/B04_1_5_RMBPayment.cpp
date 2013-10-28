#include <iostream>

using namespace std;

int main() {
    int payment;
    cin >> payment;
    cout << payment / 100 << endl;
    payment %= 100;
    cout << payment / 50 << endl;
    payment %= 50;
    cout << payment / 20 << endl;
    payment %= 20;
    cout << payment / 10 << endl;
    payment %= 10;
    cout << payment / 5 << endl;
    payment %= 5;
    cout << payment << endl;
}
