//Write a program to count words of a sentence
#include <iostream>
using namespace std;

int main() 
{
    char str[100];
    int words = 1;
    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    if (str[0] == '\0')
        words = 0;
    else {
        for (int i = 0; str[i] != '\0'; i++) 
        {
            if (str[i] == ' ')
                words++;
        }
    }

    cout << "Number of words = " << words << endl;

    return 0;
}
