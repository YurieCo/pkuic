#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char c[80];
    int i = 0;
    int count_a = 0,
        count_e = 0,
        count_i = 0,
        count_o = 0,
        count_u = 0;
    cin.getline(c, 80);
    for (i = 0; i < 80; i++) {
        switch(c[i]){
        case 'a':
            count_a += 1;
            break;
        case 'e':
            count_e += 1;
            break;
        case 'i':
            count_i += 1;
            break;
        case 'o':
            count_o += 1;
            break;
        case 'u':
            count_u += 1;
            break;
        }
        if (c[i] == '\n') {
            break;
        }
    }
    cout << count_a << " " << count_e << " " << count_i << " " << count_o << " " << count_u << endl;
    return 0;
}
