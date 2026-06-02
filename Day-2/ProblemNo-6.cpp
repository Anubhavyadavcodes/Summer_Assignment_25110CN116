//Write a program to reverse a number
#include<iostream>
using namespace std;
int main()
{
  int num,rev=0;
  cout<<"Enter the Number: "<<endl;
  cin>>num;
  if(num<0)
  {
    cout<<"Number is Invalid"<<endl;
  }
  else
    {
      while(num>0)
      {
       rev=(rev*10)+(num%10);
       num=num/10;
      }
    cout<<"Reverse of the Given Number is: "<<rev<<endl;
    }
  return 0;   
}