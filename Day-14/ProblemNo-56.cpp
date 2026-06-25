//Write a program to find duplicates in an array
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  
  cout<<"Duplicate elements are: ";
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j])
      {
        cout<<arr[i];
      }
    }
  }

  return 0;
}
