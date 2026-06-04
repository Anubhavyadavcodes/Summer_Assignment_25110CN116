//Write a program to check armstrong number
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int num,original,digits=0;
  double sum=0;
  cout<<"Enter a Number: ";
  cin>>num;

  original=num;

  //count the digits
  int temp=num;
  while(temp!=0)
    {
      digits++;
      temp=temp/10;
    }
  
  //calculating sum of digits raised to power of digits
  temp=num;
  while(temp!=0)
    {
      int digit=temp%10;
      sum=sum+pow(digit,digits);
      temp=temp/10;
    }  
  
  if(sum==original)
    cout<<original<<" is an Armstrong number.";
  else
    cout<<original<<" is not an Armstrong number.";

  return 0;  
}
