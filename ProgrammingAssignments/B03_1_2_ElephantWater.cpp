#include <iostream>
#include <cmath>
#define PAI 3.14159
using namespace std;

int main()
{
    float h, r, v;
    cin >> h;
    cin >> r;
    v = PAI * r * r * h;
    cout << ceil(20 * 1000 / v) << '\n';
    return 0;
}
