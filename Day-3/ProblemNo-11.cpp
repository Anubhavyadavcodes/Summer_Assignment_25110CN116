//Write a program to find GCD of two numbers.
#include<iostream>
using namespace std;
int main()
{
 int num1,num2,gcd;
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
  cout<<"The GCD of Given Numbers is: "<<gcd<<endl;
  return 0;
}
