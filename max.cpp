#include <iostream>
using namespace std;

int main() {
    int a[5];
    int i, j, value;
    int count = 0;  // initialize count

    // Input array elements
    for (i = 0; i < 5; i++) {
        cin >> a[i];
    }

    // Input the target value
    cin >> value;

    // Check pairs
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (a[i] + a[j] == value) {
                count++;
            }
        }
    }

    cout << "Number of pairs with sum " << value << " = " << count << endl;

    return 0;
}
  
