//Write a program to print prime numbers in a range.
#include<iostream>
using namespace std;
int main()
{
  int num,count=0;
  cout<<"Enter the Number: "<<endl;
  cin>>num;
  for(int i=1;i<=num;i++)
  {
   count=0;
   for(int j=1;j<=i;j++)
    {
      if(i%j==0)
      {
        count++;
      }
    }
    if(count==2)
    {
      cout<<"Prime Number is: ";
      cout<<i<<endl;
    }
  }
  return 0;
}
