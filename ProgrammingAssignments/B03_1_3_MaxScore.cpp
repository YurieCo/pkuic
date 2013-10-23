#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int max, score;
    cin >> max;
    for (i = 0; i < n - 1; i++){
        cin >> score;
        if(max < score) {
            max = score;
        }
    }
    cout << max << '\n';
}
