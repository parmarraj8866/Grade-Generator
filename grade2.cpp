#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter Your Marks: ";
    cin >> marks;

    char grade;
    if (marks >= 90) {
        grade = 'A+';
    } else if (marks >= 80) {
        grade = 'A';
    } else if (marks >= 70) {
        grade = 'B+';
    } else if (marks >= 60) {
        grade = 'B';
    } else if (marks >= 50) {
        grade = 'C';
    } else if (marks >= 40) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    
    switch (grade) {
        case 'A+':
            cout << "Excellent Work! Your Grade is: A+" << endl;
            break;
        case 'A':
            cout << "Well Done! Your Grade is: A" << endl;
            break;
        case 'B+':
            cout << "Good Job! Your Grade is: B+" << endl;
            break;
        case 'B':
            cout << "You Passed! Your Grade is: B" << endl;
            break;
        case 'C':
            cout << "You Passed! Your Grade is: C" << endl;
            break;
        case 'D':
            cout << "You Passed! Your Grade is: D" << endl;
            break;
        case 'F':
            cout << "Sorry, You Are Fail! Your Grade is: F" << endl;
            break;
        default:
            cout << "Invalid Grade!" << endl;
            break;
    }
}
