//Write a program to write function to Check Prime Number
#include<iostream>
using namespace std;

void prime(int x)
{
     if (x <= 1)
     {
         cout << "Number is Not Prime";
         return;
     }

     bool isPrime = true;

    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            isPrime = false;
            break;
        }
    }   

    if (isPrime == true)
       cout << "Number is Prime";
    else
       cout << "Number is Not Prime";
}

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    prime(x);

    return 0;
}