//Write a program to check whether is prime.
#include<iostream>
using namespace std;
int main()
{
 int num,count=0;
 cout<<"Enter the Number: "<<endl;
 cin>>num;
  for(int i=1;i<=num;i++)
  {
    if(num%i==0)
    {
      count++;
    }
  }
  if(count==2)
  {
    cout<<"The given Number is prime"<<endl;
  }
  else
  {
    cout<<"The given Number is not prime"<<endl;
  }
  return 0;
}
