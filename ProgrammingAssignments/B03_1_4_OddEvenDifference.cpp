#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i, a[6];
    int max_odd = 1;
    int min_even = 100;
    int input_value;
    for(i = 0; i < 6; i++){
        cin >> input_value;
        if(input_value % 2 == 1){
            if(max_odd < input_value){
                max_odd = input_value;
            }
        } else {
            if(min_even > input_value){
                min_even = input_value;
            }
        }
    }
    cout << abs(max_odd - min_even) << '\n';
}
