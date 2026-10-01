#include <iostream>
using namespace std;

int main() {
    int choice;  
    int a, b, c, d, e;
    cout << "Enter 5 numbers: ";
   
    cout << "Choose a time slot:\n";
    cout << "1. 8:30\n";
    cout << "2. 9:30\n";
    cout << "3. 10:30\n";
    cout << "4. 11:30\n";
    cout << "5. 12:30\n";
    cout << "Enter choice (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "" << a << endl;
            break;
        case 2:
            cout << "At 9:30 ? "<< endl;
            break;
        case 3:
            cout << "At 10:30 ? "<< endl;
            break;
        case 4:
            cout << "At 11:30 ? " << endl;
            break;
        case 5:
            cout << "At 12:30 ? "  << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
