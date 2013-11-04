#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

int main() {
    int N; 
    int own = 0;
    double K, price;
    int year = 0, i;
    ostringstream ss;
    while(cin >> N >> K) {
        for (i = 1; i < 21; i++) {
           own = N * i; 
           price = 200 * pow(1 + K/100, i - 1);
           if (own >= price) {
                ss << i << "\n"; 
                break;
           }
           if (i == 20) {
               ss << "Impossible\n";
           }
        }
    }
    cout << ss.str();
    return 0;
}
