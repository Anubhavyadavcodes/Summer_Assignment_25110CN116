//write a program to calculate sum of N natural numbers.
#include<iostream>
using namespace std;
int main()
{
int n,sum=0;
cout<<"Enter the Number: ";
cin>>n;  

  for(int i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  cout<<"The sum of the Natural Numbers is: "<<sum<<endl;
  return 0;
}
