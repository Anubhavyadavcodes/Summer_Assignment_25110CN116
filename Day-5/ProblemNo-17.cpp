//Write a program to check perfect number
#include<iostream>
using namespace std;
int main()
{
  int num,temp,sum=0;
  cout<<"Enter the number: ";
  cin>>num;
  temp=num;
  if(num<0)
  {
    cout<<"Number is Invalid"<<endl;
  }

  else
  {
    for(int i=1;i<=num/2;i++)
    {
      if(num%i==0)
      {
        sum=sum+i;
      }
    }

    if(temp==sum)
    {
      cout<<"Number is perfect"<<endl;
    }
    else
    {
      cout<<"Number is not perfect"<<endl;
    }
  }
  
  return 0;
}
