//Write a program to find factorial of a number.
#include<iostream>
using namespace std;
int main()
{
  int fact=1,num;
  cout<<"Enter the Number: ";
  cin>>num;
  for(int i=1;i<=num;i++)
  {
    fact=fact*i;
  }
  cout<<"Factorial of the Number is: "<<fact<<endl;
  return 0;
}