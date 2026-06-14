//Write a program to write function to Find Sum of Two Numbers
#include<iostream>
using namespace std;

int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int x, y;
    cout << "Enter first number : ";
    cin >> x;
    cout << "Enter second number : ";
    cin >> y;

    cout << "Sum of two numbers is : " << sum(x, y);

    return 0;
}