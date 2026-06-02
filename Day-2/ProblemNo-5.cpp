//Write a program to find sum of digits of a number
#include<iostream>
using namespace std;
int main()
 {
  int num, sum=0;
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
      sum=sum+num%10;
      num=num/10;
    }
   cout<<"Sum of the digits of the given number is: "<<sum<<endl;
  }
  return 0;
}
