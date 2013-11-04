#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n, i;
    cin >> n;
    float distance, walk_time, ride_time;
    string b[n];
    for (i = 0; i < n; i++) {
        cin >> distance;
        walk_time = distance / 1.2;
        ride_time = distance / 3.0 + 50;
        if(walk_time < ride_time) {
            b[i] = "Walk";
        } else if (walk_time > ride_time) {
            b[i] = "Bike";
        } else {
            b[i] = "All";
        }
    }

    for (i = 0; i < n; i++) {
        cout << b[i] << endl;
    }

    return 0;
}
