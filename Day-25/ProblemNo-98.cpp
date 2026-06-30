//Write a program to find common characters in a string

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    int freq1[256] = {0};
    int freq2[256] = {0};

    for (int i = 0; i < str1.length(); i++)
        freq1[(int)str1[i]]++;

    for (int i = 0; i < str2.length(); i++)
        freq2[(int)str2[i]]++;

    cout << "Common characters: ";

    for (int i = 0; i < 256; i++) 
    {
        if (freq1[i] > 0 && freq2[i] > 0)
            cout << char(i) << " ";
    }

    return 0;
}
