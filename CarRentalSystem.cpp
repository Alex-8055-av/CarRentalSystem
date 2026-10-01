#include <iostream>
using namespace std;

int main() {

    string cars[5] = {
        "BMW",
        "Audi",
        "Toyota",
        "Honda",
        "Mercedes"
    };

    int price[5] = {
        5000,
        4000,
        2000,
        1500,
        6000
    };

    int choice;
    int days;

    cout << "============================\n";
    cout << "     CAR RENTAL SYSTEM\n";
    cout << "============================\n";

    cout << "\nAvailable Cars:\n";

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". "
             << cars[i]
             << " - Rs." << price[i]
             << "/day\n";
    }

    cout << "\nChoose a car (1-5): ";
    cin >> choice;

    if (choice < 1 || choice > 5) {
        cout << "Invalid choice!\n";
        return 0;
    }

    cout << "Enter number of days: ";
    cin >> days;

    int total = price[choice - 1] * days;

    cout << "\n============================\n";
    cout << "        RENTAL BILL\n";
    cout << "============================\n";

    cout << "Car: " << cars[choice - 1] << endl;
    cout << "Days: " << days << endl;
    cout << "Price per day: Rs."
         << price[choice - 1] << endl;

    cout << "Total: Rs." << total << endl;

    cout << "\nThank you for using our service!\n";

    return 0;
}
