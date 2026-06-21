//Write a program to input and display array
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;

  int arr[n];
  cout<<"Enter "<<n<<" elements:\n";
  for(int i=0;i<n;i++)
  {
  cin>>arr[i];
  }

  cout<<"Array elements are:\n";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }

  return 0;
}
