//Write a program to write function for to check armstrong number
#include <iostream>
#include <cmath>
using namespace std;

void armstrong(int x)
{
     int original, digits = 0;
     double sum = 0;

     original = x;
     int temp = x;
     while(temp != 0)
     {
         digits++;
         temp = temp / 10;
     }

     temp = x;
     while(temp != 0)
     {
          int digit = temp % 10;
          sum = sum + pow(digit, digits);
          temp = temp / 10;
     }

     if(sum == original)
         cout << original << " is an Armstrong number.";
     else
         cout << original << " is not an Armstrong number.";

     return;
}

int main()
{
    int num;
    cout << "Enter the Number : ";
    cin >> num;
    armstrong(num);

    return 0;
}   