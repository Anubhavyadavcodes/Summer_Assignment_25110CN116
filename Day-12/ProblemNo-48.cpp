//Write a program to write the function to check for perfect number
#include <iostream>
using namespace std;

void perfect(int x)
{
     int temp = 0;
      
     for(int i = 1; i < x; i++)
     {
        if(x % i == 0)
        {
            temp = temp + i;
        }
     }

     if(temp == x)
     {
         cout << "Number is Perfect";
     }
     else
     {
        cout << "Number is Not Perfect";
     }

     return;
}

int main()
{
    int num;
    cout << "Enter the Number : ";
    cin >> num;
    perfect(num);

    return 0;
}
