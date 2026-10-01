#include <iostream>
using namespace std;

class Car {
public:   // Public section
    string brand;
    void showBrand() {
        cout << "Car brand: " << brand << endl;
    }
};

int main() {
    Car c;
    c.brand = "Tesla";   // Accessible directly
    c.showBrand();       // Accessible directly
}
