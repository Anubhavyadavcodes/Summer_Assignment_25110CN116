//Write a program to write function to print fibonacci series
#include <iostream>
using namespace std;

void fibonacci(int x)
{
     int a = 0, b = 1, c;

     if(x <= 0)
     {
         cout << "Invalid input";
     }
     else
     {
        for(int i = 1; i <= x; i++)
        {
            cout << a << " ";
            c = a + b;
            a = b;
            b = c;
        }
     }
     return;
}

int main()
{
    int num;
    cout << "Enter the number of terms : ";
    cin >> num;
    fibonacci(num);

    return 0;
}