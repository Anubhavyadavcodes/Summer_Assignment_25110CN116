//Write a program to convert binary to decimal
#include<iostream>
#include <cmath> 
using namespace std;

int main()
{ 
    long long binary;
    int decimal = 0, power = 0;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0) { 
        int digit = binary % 10;\

        decimal = decimal + digit * pow(2, power);

        binary = binary / 10;
        power++;
    }
    cout << "Decimal equivalent = " << decimal;

    return 0; 
}