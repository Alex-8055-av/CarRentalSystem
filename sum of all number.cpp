#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    }

    cout << "Sum = " << sum << endl;
    return 0;
}

