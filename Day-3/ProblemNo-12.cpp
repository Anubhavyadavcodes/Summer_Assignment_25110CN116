//Write a program to find the LCM of two numbers.
#include<iostream>
using namespace std;
int main()
{
  int num1,num2,gcd,lcm;
 cout<<"Enter the first Number: ";
 cin>>num1;
 cout<<"Enter the second Number: ";
 cin>>num2;
 for(int i=1;i<=min(num1,num2);i++)
  {
    if(num1%i==0 && num2%i==0)
      {
        gcd=i;
      }
  }
  lcm=(num1*num2)/gcd;
  cout<<"The LCM of given numbers is: "<<lcm<<endl;
  return 0;
}

