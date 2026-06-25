//Write a program to find second largest element of an array
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the size of an array: ";
  cin>>n;
  
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  
  int largest=arr[0];
  int secondlargest=arr[0];

  for(int i=1;i<n;i++)
  {
    if(arr[i]>largest)
    {
      largest=arr[i];
    }
  }

  for(int i=0;i<n;i++)
  {
    if(arr[i]>secondlargest && arr[i]<largest)
    {
      secondlargest=arr[i];
    }
  }

  cout<<"Second Largest Element = "<<secondlargest<<endl;

  return 0;
}
