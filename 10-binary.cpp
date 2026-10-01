#include <iostream>
using namespace std;

int binary(int a[], int t, int n) {
    int s = 0, e = n - 1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (t < a[mid]) {
            e = mid - 1;  // move left
        }
        else if (t > a[mid]) {
            s = mid + 1;  // move right
        }
        else {
            return mid;   // found
        }
    }
    return -1;  // not found
}

int main() {
    int a[] = {1, 2, 4, 6, 9, 11, 23};
    int n = sizeof(a) / sizeof(int);
    int t = 1;
    cout << binary(a, t, n);
    return 0;
}

