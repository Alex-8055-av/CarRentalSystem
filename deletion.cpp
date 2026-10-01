#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("data.txt", ios::in | ios::out | ios::app);

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    file << "Appending new data..." << endl; // write
    file.seekg(0); // move pointer to beginning

    string line;
    while (getline(file, line)) {
        cout << line << endl; // read
    }

    file.close();
    return 0;
}
