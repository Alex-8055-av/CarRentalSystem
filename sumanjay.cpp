#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;
    string correctUser = "admin";   // set correct username
    string correctPass = "1234";    // set correct password
    int attempts = 0;

    while (attempts < 3) {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (username == correctUser && password == correctPass) {
            cout << "Login successful!" << endl;
            break;
        } else {
            cout << "Login failed!" << endl;
            attempts++;
        }
    }

    if (attempts == 3) {
        cout << "Too many failed attempts. Access denied." << endl;
    }

    return 0;
}

