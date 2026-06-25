//Write a program to find frequency of an element in an array
#include<iostream>
using namespace std;
int main()
{
  int n,key,count=0;

  cout<<"Enter the size of the array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  cout<<"Enter the element whose frequency is to be found: ";
  cin>>key;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==key)
    {
      count++;
    }
  }

  cout<<"Frequency of "<<key<<"="<<count<<endl;

  return 0;
}
