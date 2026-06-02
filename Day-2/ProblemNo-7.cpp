//write a program to find product of digits
#include<iostream>
using namespace std;
int main()
{
  int num,prod=1;
  cout<<"Enter the Number: "<<endl;
  cin>>num;
  if(num<0)
    {
      cout<<"Number is Invalid";
    }
  else
    {
      while(num>0)
        {
          prod=prod*(num%10);
          num=num/10;
        }
     cout<<"The product of the Given Number is: "<<prod<<endl;  
    }
  return 0;    
}