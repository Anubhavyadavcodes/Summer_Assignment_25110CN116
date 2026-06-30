//Write a program to create salary management system
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Employee 
{
    int id;
    string name;
    float basic, hra, da, gross;
};

int main() 
{
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n];

    for (int i = 0; i < n; i++) 
    {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "Enter Employee ID: ";
        cin >> emp[i].id;

        cout << "Enter Employee Name: ";
        cin >> emp[i].name;

        cout << "Enter Basic Salary: ";
        cin >> emp[i].basic;

        emp[i].hra = 0.20 * emp[i].basic;
        emp[i].da = 0.10 * emp[i].basic;
        emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
    }

    cout << "\nSalary Details\n";
    cout << "-----------------------------------------------------------------------\n";
    cout << "ID\tName\tBasic\tHRA\tDA\tGross Salary\n";
    cout << "-----------------------------------------------------------------------\n";

    for (int i = 0; i < n; i++) 
    {
        cout << emp[i].id << "\t"
             << emp[i].name << "\t"
             << fixed << setprecision(2)
             << emp[i].basic << "\t"
             << emp[i].hra << "\t"
             << emp[i].da << "\t"
             << emp[i].gross << endl;
    }

    return 0;
}

