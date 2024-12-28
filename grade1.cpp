#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter Your Marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Excellent Work! Your Grade is: A+" << endl;
    }
    else if (marks >= 80) {
        cout << "Well Done! Your Grade is: A" << endl;
    }
    else if (marks >= 70) {
        cout << "Good Job! Your Grade is: B+" << endl;
    }
    else if (marks >= 60) {
        cout << "You Passed! Your Grade is: B" << endl;
    }
    else if (marks >= 50) {
        cout << "You Passed! Your Grade is: C" << endl;
    }
    else if (marks >= 40) {
        cout << "You Passed! Your Grade is: D" << endl;
    }
    else {
        cout << "Sorry, You Are Fail! Your Grade is: F" << endl;
    }
}
