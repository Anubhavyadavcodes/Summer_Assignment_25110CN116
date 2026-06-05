//Write a program to find largest prime factor of a Number
#include<iostream>
using namespace std;
int main()
{
  long long num;
  cout<<"Enter the Number: ";
  cin>>num;
  
  int largestprimefactor=0;

  for(int i=2;i<=num/2;i++)
  {
    while(num%i==0)
    {
      largestprimefactor=i;
      num=num/i;
    }
  }

  if(num>1)
  {
    largestprimefactor=num;
  }

  cout<<"Largest Prime Factor = "<<largestprimefactor;

  return 0;
}
