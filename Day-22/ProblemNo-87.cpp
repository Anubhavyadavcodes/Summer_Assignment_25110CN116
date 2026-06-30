//Write a program to character frequency
#include <iostream>
using namespace std;

int main() 
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ')
            continue;

        int count = 1;

        bool counted = false;
        for (int k = 0; k < i; k++) 
        {
            if (str[i] == str[k]) 
            {
                counted = true;
                break;
            }
        }

        if (counted)
            continue;

        for (int j = i + 1; str[j] != '\0'; j++) 
        {
            if (str[i] == str[j]) 
            {
                count++;
            }
        }

        cout << str[i] << " = " << count << endl;
    }

    return 0;
}
