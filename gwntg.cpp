#include <iostream>
using namespace std;

int sumof(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cout << "Enter number " << i+1 << ": ";
        cin >> x;
        sum += x;
    }
    return sum;  
}

int main() {
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;

    cout << "Sum = " << sumof(n) << endl;
    return 0;
}

