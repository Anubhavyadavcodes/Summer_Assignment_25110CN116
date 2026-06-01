//Write a program to count digits in a number
#include<iostream>
using namespace std;
int main()
{
    int count=0;
    long long num;
    cout<<"Enter the Number: ";
    cin>>num;
    if(num==0)
    {
        count=1;
    }
    else
    {
        while(num!=0)
        {
            num=num/10;
            count++;
        }
    }
    cout<<"Number of digits in the given number is: "<<count<<endl;
    return 0;
}