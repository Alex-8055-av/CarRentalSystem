#include <iostream>
#include <string>
using namespace std;

// Function to display subjects
void showSubjects(string course, string semester) {
    if(course == "a") { // B.Tech
        if(semester == "a") {
            cout << "MATHS\nPHYSICS\nBASIC COMPUTER\nENGLISH\n";
        } else if(semester == "b") {
            cout << "MATHS 2\nOOPS\nWORKSHOP\nPERSONALITY DEVELOPMENT\nBASIC MECHANIC\n";
        } else if(semester == "c") {
            cout << "DATA STRUCTURE\nOBJECT ORIENTED PROGRAMMING\nDISCRETE\nHTML AND CSS\n";
        } else if(semester == "d") {
            cout << "DAA\nCOA\nSOFTWARE ENGINEERING\nOPERATING SYSTEM\n";
        }
    }
    else if(course == "b") { // BBA
        if(semester == "a") {
            cout << "AG1\nAG2\nAG3\nAG4\n";
        } else if(semester == "b") {
            cout << "MATHS 2\nOOPS\nWORKSHOP\nPERSONALITY DEVELOPMENT\nBASIC MECHANIC\n";
        }
        // Add other semesters similarly...
    }
    else if(course == "c") { // BCA
        // Reuse same semester logic as B.Tech if subjects are same
        showSubjects("a", semester);
    }
    else if(course == "d") { // Agriculture
        // Reuse same semester logic as B.Tech if subjects are same
        showSubjects("a", semester);
    }
}

int main() {
    string course, semester;

    cout << "Select your course:\n";
    cout << "(a) B.TECH COMPUTER SCIENCE\n";
    cout << "(b) BBA\n";
    cout << "(c) BCA\n";
    cout << "(d) AGRICULTURE\n";
    cin >> course;

    cout << "Select your semester:\n";
    cout << "(a) First semester\n";
    cout << "(b) Second semester\n";
    cout << "(c) Third semester\n";
    cout << "(d) Fourth semester\n";
    cin >> semester;

    cout << "Your subjects:\n";
    showSubjects(course, semester);

    return 0;
}

