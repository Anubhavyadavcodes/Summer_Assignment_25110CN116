//Write a program to find missing number in an array
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the value of n: ";
  cin>>n;

  int arr[n-1];
  cout<<"Enter "<<n-1<<" elements:\n";
  for(int i=0;i<n-1;i++)
  {
    cin>>arr[i];
  }

  int expectedsum=n*(n+1)/2;
  int actualsum=0;

  for(int i=0;i<n-1;i++)
  {
    actualsum=actualsum+arr[i];
  }

  int missingnumber=expectedsum-actualsum;
  cout<<"Missing Number= "<<missingnumber<<endl;

  return 0;
}
