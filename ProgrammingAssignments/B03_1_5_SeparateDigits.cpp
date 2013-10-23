#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    cout << num / 100 << '\n';
    num = num % 100;
    cout << num / 10 << '\n';
    num = num % 10;
    cout << num << '\n';
    return 0;
}
