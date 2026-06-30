//Write a program to create student record management system
#include <iostream>
#include <string>
using namespace std;

int main() {
    int rollNo;
    string name;
    float marks1, marks2, marks3, total, percentage;
    char grade;

    cout << "Student Record Management System" << endl;

    // Input Student Details
    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cin.ignore(); // Ignore newline character
    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Marks in Subject 1: ";
    cin >> marks1;

    cout << "Enter Marks in Subject 2: ";
    cin >> marks2;

    cout << "Enter Marks in Subject 3: ";
    cin >> marks3;

    // Calculate Total and Percentage
    total = marks1 + marks2 + marks3;
    percentage = total / 3;

    // Assign Grade
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    // Display Student Record
    cout << "Student Record" << endl;
    cout << "Roll Number : " << rollNo << endl;
    cout << "Name        : " << name << endl;
    cout << "Subject 1   : " << marks1 << endl;
    cout << "Subject 2   : " << marks2 << endl;
    cout << "Subject 3   : " << marks3 << endl;
    cout << "Total Marks : " << total << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;

    return 0;
}