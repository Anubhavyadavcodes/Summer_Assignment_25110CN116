//Write a program to create marksheet generation system
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

struct Student 
{
    int rollNo;
    string name;
    float marks[5];
    float total, percentage;
    char grade[3];
};

int main() 
{
    Student s;

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cout << "Enter Student Name: ";
    cin >> s.name;

    s.total = 0;

    cout << "Enter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++) 
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> s.marks[i];
        s.total += s.marks[i];
    }

    s.percentage = s.total / 5;

    if (s.percentage >= 90)
        strcpy(s.grade, "A+");
    else if (s.percentage >= 80)
        strcpy(s.grade, "A");
    else if (s.percentage >= 70)
        strcpy(s.grade, "B");
    else if (s.percentage >= 60)
        strcpy(s.grade, "C");
    else if (s.percentage >= 50)
        strcpy(s.grade, "D");
    else
        strcpy(s.grade, "F");

    cout << "\nMARKSHEET\n";
    cout << "Roll Number : " << s.rollNo << endl;
    cout << "Name        : " << s.name << endl;

    cout << "\nMarks:\n";
    for (int i = 0; i < 5; i++) 
    {
        cout << "Subject " << i + 1 << ": " << s.marks[i] << endl;
    }

    cout << fixed << setprecision(2);
    cout << "\nTotal Marks : " << s.total << "/500" << endl;
    cout << "Percentage  : " << s.percentage << "%" << endl;
    cout << "Grade       : " << s.grade << endl;

    return 0;
}
