#include <iostream>

using namespace std;

int partition(int *arr, int start, int end)
{
    int pivot, mid, i, temp;
    pivot = arr[start];
    mid = start;
    for (i = start + 1; i <= end; i++) {
        if (arr[i] < pivot) {
            mid++;
            temp = arr[i];
            arr[mid] = temp;
            arr[i] = temp;
        }
    }
    temp = arr[mid];
    arr[mid] = arr[start];
    arr[start] = temp;
    return mid;
}

int order_statistic(int *arr, int start, int end, int k)
{
    int i;
    if (start < end) {
        i = partition(arr, start, end);
        if (k == i) {
            return i;
        } else if (k > i) {
            order_statistic(arr, i + 1, end, k);
        } else {
            order_statistic(arr, start, i - 1, k);
        }
    }
}

int swap(int *a, int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

int main() {
    int i, n, k;
    cin >> n;
    cin >> k;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    i = order_statistic(arr, 0, n - 1, n - k);
    cout << arr[i] << endl;
}
