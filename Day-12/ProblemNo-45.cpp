//Write a program to write function for to check palindrome
#include <iostream>
using namespace std;

void palindrom(int x)
{
     int temp, rev = 0; 
     if(x < 0)
     {
         cout << "Number is Invalid" << endl;
     }
     else
     {
        temp = x;
        while(x > 0)
        {
            rev = (rev * 10) + (x % 10);
            x = x / 10;
        }
       if(rev == temp)
        {
           cout << "Number is Palindrome";
        }
        else
        {
           cout << "Number is not Palindrome";
        }
     }
     return;
}

int main()
{
    int num;
    cout << "Enter the Number : ";
    cin >> num;
    palindrom(num);

    return 0;
}
