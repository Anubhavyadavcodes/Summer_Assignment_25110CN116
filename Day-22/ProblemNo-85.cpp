//Write a program to check palindrome string
#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int len = strlen(str);
    bool palindrome = true;

    for (int i = 0; i < len / 2; i++) 
    {
        if (str[i] != str[len - 1 - i]) 
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "The string is a Palindrome.";
    else
        cout << "The string is Not a Palindrome.";

    return 0;
}
