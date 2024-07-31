#include<iostream>
using namespace std;

int main() {
    while (true) {
        cout << "Enter marks (0-100) or 'quit' to exit: ";
        string input;
        cin >> input;

        if (input == "quit") break;

        int marks;
        try {
            marks = stoi(input);
        } catch (invalid_argument) {
            cout << "Invalid input. Please enter a numerical value." << endl;
            continue;
        }

        if (marks < 0 || marks > 100) {
            cout << "Invalid marks. Please enter a value between 0 and 100." << endl;
            continue;
        }

        char grade;
        if (marks >= 90) grade = 'A';
        else if (marks >= 85) grade = 'B+';
        else if (marks >= 80) grade = 'B';
        else if (marks >= 75) grade = 'B-';
        else if (marks >= 70) grade = 'C+';
        else if (marks >= 65) grade = 'C';
        else if (marks >= 60) grade = 'C-';
        else if (marks >= 55) grade = 'D+';
        else if (marks >= 50) grade = 'D';
        else if (marks >= 45) grade = 'D-';
        else grade = 'F';

        cout << "Grade: " << grade << endl;
    }

    return 0;
}