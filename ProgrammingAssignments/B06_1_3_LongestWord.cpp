#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char c[500];
    int i = 0, len, pos, max = 0, count = 0;
    cin.getline(c, 500);
    len = strlen(c);

    // cout << len << endl;
    for (i = 0; i < len - 1; i++) {
        if (c[i] == ' ' || i == len - 2) {
            if (count > max) {
                max = count;
                pos = i;
               //  cout << " count: " << count << " i: " << i << endl;
               //  cout << " pos:" << pos << endl;
            }
            if (i < len - 2) {
                count = 0;
            }
        } else {
            count += 1;
        }
    }

    // cout << c[pos] << endl;

    // cout << count << endl;
    for (i = pos - count; i <= pos; i++) {
        cout << c[i];
    }
    cout << endl;
    return 0;
}
