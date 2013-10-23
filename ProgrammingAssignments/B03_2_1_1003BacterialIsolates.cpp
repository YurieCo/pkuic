#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i, j;
    int n;
    int id[100];
    double rate[100];

    cin >> n;
    for (i = 0; i < n; i++) {
        double initial, result;
        cin >> id[i] >> initial >> result;
        rate[i] = result / initial;
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (rate[j + 1] > rate[j]) {
                int tmp = id[j];
                id[j] = id[j + 1];
                id[j + 1] = tmp;;
                double tmp2 = rate[j];
                rate[j] = rate[j + 1];
                rate[j + 1] = tmp2;
            }
        }
    }

    double max = 0;
    int num1 = 0;

    for (i = 0; i < n - 1; i++) {
        if (max < rate[i] - rate[i + 1]) {
            max = rate[i] - rate[i + 1];
            num1 = i;
        }
    }
    cout << num1 + 1 << endl;

    for (i = num1; i >= 0; i--) {
        cout << id[i] << endl;
    }
    cout << n - num1 - 1 << endl;

    for (i = n - 1; i >= num1 + 1; i--) {
        cout << id[i] << endl;
    }

    return 0;
}
