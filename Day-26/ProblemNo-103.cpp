//Write a program to create ATM simulation
#include <iostream>
using namespace std;

int main() 
{
    int pin, choice;
    float balance = 10000.0, amount;

    cout << "ATM Simulation" << endl;
    cout << "Enter your 4-digit PIN: ";
    cin >> pin;

    // Check PIN
    if (pin != 1234) 
    {
        cout << "Incorrect PIN! Access Denied." << endl;
        return 0;
    }

    do 
    {
        cout << "\nATM Menu" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your current balance is: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: Rs. ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful!" << endl;
                    cout << "Updated balance: Rs. " << balance << endl;
                } else {
                    cout << "Invalid amount!" << endl;
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: Rs. ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Invalid amount!" << endl;
                } else if (amount > balance) {
                    cout << "Insufficient balance!" << endl;
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful!" << endl;
                    cout << "Remaining balance: Rs. " << balance << endl;
                }
                break;

            case 4:
                cout << "Thank you for using the ATM!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}
