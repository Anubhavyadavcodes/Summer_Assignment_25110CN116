//Write a program to find sum and average of array
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;

  int arr[n];
  int sum=0;
  float average;

  cout<<"Enter "<<n<<" elements:\n";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    sum=sum+arr[i];
  }

  average=(float)sum/n;

  cout<<"Sum = "<<sum<<endl;
  cout<<"Average = "<<average<<endl;

  return 0;
}
