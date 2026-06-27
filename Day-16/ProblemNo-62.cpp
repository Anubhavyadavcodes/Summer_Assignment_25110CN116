//Write a program to find maximum frequency element of an array
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
  int maxfreq=0;
  int maxelement=arr[0];

  for(int i=0;i<n;i++)
  {
    int count=1;
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j])
      {
        count++;
      }
    }
    if(count>maxfreq)
    {
      maxfreq=count;
      maxelement=arr[i];
    }
  }

  cout<<"Element with Maximum Frequency= "<<maxelement<<endl;
  cout<<"Frequency= "<<maxfreq<<endl;

  return 0;
}
