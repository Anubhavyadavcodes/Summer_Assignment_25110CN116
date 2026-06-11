//Write a program to print recursive reverse number 
#include<iostream>
using namespace std;

int reverse(int x)
{
    static int c=0;
    if(x==0)
    {
        return c;

    }
    c=(c*10)+(x%10);
    return reverse(x/10);
}
int main()
{
    int num;
    cout<<"Enter Number = ";
    cin>>num;
    int r = reverse(num);
    cout<<"Reverse = "<< r;

    return 0;
}