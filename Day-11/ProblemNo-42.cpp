//Write a program to write function to Find Maximum of Two Numbers
#include<iostream>
using namespace std;

int max(int x, int y)
{
    if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int x, y;
    cout << "Enter first number : ";
    cin >> x;
    cout << "Enter second number : ";
    cin >> y;

    cout << "Maximum of two numbers is : " << max(x, y);

    return 0;

}