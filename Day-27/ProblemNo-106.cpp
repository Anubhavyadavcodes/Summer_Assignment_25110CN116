//Write a program to create employee management system
#include <iostream>
#include <string>
using namespace std;

struct Employee 
{
    int id;
    string name;
    float salary;
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

        cout << "Enter ID: ";
        cin >> emp[i].id;

        cout << "Enter Name: ";
        cin >> emp[i].name;

        cout << "Enter Salary: ";
        cin >> emp[i].salary;
    }

    
    cout << "\nEmployee Details:\n";
    cout << "---------------------------------\n";
    cout << "ID\tName\tSalary\n";
    cout << "---------------------------------\n";

    for (int i = 0; i < n; i++) 
    {
        cout << emp[i].id << "\t"
             << emp[i].name << "\t"
             << emp[i].salary << endl;
    }

    int searchId;
    bool found = false;

    cout << "\nEnter Employee ID to search: ";
    cin >> searchId;

    for (int i = 0; i < n; i++) 
    {
        if (emp[i].id == searchId) 
        {
            cout << "\nEmployee Found\n";
            cout << "ID: " << emp[i].id << endl;
            cout << "Name: " << emp[i].name << endl;
            cout << "Salary: " << emp[i].salary << endl;
            found = true;
            break;
        }
    }

    if (!found) 
    {
        cout << "Employee not found." << endl;
    }

    return 0;
}
