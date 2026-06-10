//Write a program to convert decimal to binary  
#include <iostream>
using namespace std;

int main()
{
    int decimal, binary = 0, place = 1, remainder;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    if (decimal == 0)
    {
       cout << "Binary equivalent: 0";
       return 0;
    }

    while (decimal > 0)
    {
        remainder = decimal % 2;
        binary = binary + (remainder * place);
        place = place * 10;
        decimal = decimal / 2;
    }

    cout << "Binary equivalent: " << binary;
    
    return 0;
  }