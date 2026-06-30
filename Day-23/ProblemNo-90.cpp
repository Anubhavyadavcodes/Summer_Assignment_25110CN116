//Write a program to find first repeating character
#include <iostream>
using namespace std;

int main() 
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    bool found = false;

    for (int i = 0; str[i] != '\0'; i++) 
    {
        for (int j = i + 1; str[j] != '\0'; j++) 
        {
            if (str[i] == str[j]) 
            {
                cout << "First repeating character: " << str[i] << endl;
                found = true;
                break;
            }
        }

        if (found)
            break;
    }

    if (!found) 
    {
        cout << "No repeating character found." << endl;
    }

    return 0;
}
