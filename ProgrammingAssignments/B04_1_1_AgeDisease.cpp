#include <iostream>
using namespace std;

int main() {
    int n, i;
    cin >> n;
    int a[n];
    float count1 = 0, 
        count2 = 0, 
        count3 = 0,
        count4 = 0;
    for (i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] <= 18) {
            count1++;
        } else if (a[i] <= 35) {
            count2++;
        } else if (a[i] <= 60) {
            count3++;
        } else{
            count4++;
        }
    }
    
    cout.setf(ios::fixed);   
    cout.setf(ios::showpoint);   
    cout.precision(2); //用两位小数显示
    cout << "1-18: "<< count1/n * 100 <<"%\n";
    cout << "19-35: "<< count2/n * 100 <<"%\n";
    cout << "36-60: "<< count3/n * 100 <<"%\n";
    cout << "60-: "<< count4/n * 100 <<"%\n";
    return 0;
}
