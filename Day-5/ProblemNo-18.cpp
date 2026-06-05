//Write a program to check strong number
#include<iostream>
using namespace std;
int main()
{
  int num,temp,sum=0;
  cout<<"Enter the Number: ";
  cin>>num;
  temp=num;

  if(num<0)
  {
    cout<<"Number is Invalid"<<endl;
  }

  else
  {
    while(num>0)
    {
      int fact=1;
      for(int i=1;i<=(num%10);i++)
      {
        fact=fact*i;
      }
      sum=sum+fact;
      num=num/10;
    }
  }

  if(sum==temp)
  {
    cout<<"Number is Strong"<<endl;
  }
  else
  {
    cout<<"Number is not Strong"<<endl;
  }

  return 0;
}
