//Write a program to write function to Find Factorial
#include<iostream>
using namespace std;

int fact(int x)
{
    int f = 1;
    for(int i = 1; i <= x; i++)
    {
        f = f * i;
    }
    return f;

}

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << "Factorial of the number is : " << fact(x);

    return 0;
}