//Write a program to check whether a number is palindrome
#include<iostream>
using namespace std;
int main()
{
  int num;
  cout<<"Enter the Number: "<<endl;
  cin>>num;
  int save=num;
  if(num<0)
    {
      cout<<"Number is Invalid"<<endl;
    }
  else
    { 
       int rev=0;
      while(num>0)
        {
          rev=rev*10+(num%10);
          num=num/10;
        }
      if(save==rev)
        {
          cout<<"Number is Palindrome"<<endl;
        }
      else
        {
          cout<<"Number is not Palindrome"<<endl;
        }    
    }
  return 0;    
}
