//Write a program to generate fibonacci series
#include<iostream>
using namespace std;
int main()
{
  int num,a=0,b=1,c;
  cout<<"Enter the number of terms: ";
  cin>>num;
  if(num<=0)
  {
    cout<<"Invaid input";
  }
  else
  {
    for(int i=1;i<=num;i++)
    {
      cout<<a<<" ";
      c=a+b;
      a=b;
      b=c;
    }
  }
  return 0;
}
