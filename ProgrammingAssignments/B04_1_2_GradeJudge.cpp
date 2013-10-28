#include <iostream>

using namespace std;

int main() {
    int judge_score;
    cin >> judge_score;
    if (judge_score < 60) {
        cout << 7 << endl;
    } else if (judge_score < 70) {
        cout << 6 << endl;
    } else if (judge_score < 80) {
        cout << 5 << endl;
    } else if (judge_score < 85) {
        cout << 4 << endl;
    } else if (judge_score < 90) {
        cout << 3 << endl;
    } else if (judge_score < 95) {
        cout << 2 << endl;
    } else if (judge_score <= 100) {
        cout << 1 << endl;
    }
}
