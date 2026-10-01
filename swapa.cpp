#include <iostream>
using namespace std;

void sw(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swap: a = " << a << ", b = " << b << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout<<"old a value = "<<a<<" \n old b ="<<b<<endl;
    sw(a, b);
    return 0;
}

