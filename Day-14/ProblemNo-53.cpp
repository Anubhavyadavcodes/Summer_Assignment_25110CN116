//Write a program to linear search
#include<iostream>
using namespace std;
int main()
{
  int n,key;
  cout<<"Enter the size of array: ";
  cin>>n;

  int arr[n];
  
  cout<<"Enter "<<n<<" elements:\n";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  cout<<"Enter the element to search: ";
  cin>>key;

  int pos= 0;

  for(int i=0;i<n;i++)
  {
    if(arr[i]==key)
    {
      pos=i;
      break;
    }
  }

  if(pos!=0)
  cout<<"Element found at position "<<pos+1<<endl;
  else
  cout<<"Element not found"<<endl;

  return 0;
}
