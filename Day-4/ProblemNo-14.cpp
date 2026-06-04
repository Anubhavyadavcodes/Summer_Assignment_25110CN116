//Write a program to find nth fibonacci term
#include<iostream>
using namespace std;
int main()
{
  int num,a=0,b=1,c;
  cout<<"Enter the term number: ";
  cin>>num;
  if(num<=0)
  {
    cout<<"Invaid input";
  }
  else if(num==1)
  {
    cout<<0<<endl;
  }
  else
  {
    for(int i=1;i<num;i++)
    {
      c=a+b;
      a=b;
      b=c;
    }
   cout<<a<<endl; 
  }
  return 0;
}
