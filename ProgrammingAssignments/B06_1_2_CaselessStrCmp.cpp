#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char str1[80], str2[80];
    int i;
    cin.getline(str1, 80);
    cin.getline(str2, 80);


    for (i = 0; i < 80; i++) {
        if (str1[i] != str2[i] && abs(str1[i] - str2[i]) != 32) {
            if (str1[i] - str2[i] > 0) {
                cout << ">" << endl;
                break;
            } else {
                cout << "<" << endl;
                break;
            }
        }
        if (str1[i] == '\0' && str2[i] == '\0') {
            cout << "=" << endl;
            break;
        }
    }
    return 0;
}
