#include <iostream>
using namespace std;

class Teacher {
public:
    string name;
    string department;
    string subject;
    double salary;

    // Constructor
    Teacher(string n, string d, string s, double sal) {
        name = n;
        department = d;
        subject = s;
        salary = sal;
    }

    // Display function
    void showInfo() {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
}; 

int main() {
    Teacher t("Alex", "Computer Science", "C++", 20000);
    t.showInfo();
    return 0;
}
