//Write a program to count even and odd elements
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;

  int arr[n];
  int evencount=0,oddcount=0;

  cout<<"Enter "<<n<<" elements:\n";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];

    if(arr[i]%2==0)
      evencount++;
    else
      oddcount++;  
  }
  cout<<"Number of even elements = "<<evencount<<endl;
  cout<<"Number of odd elements = "<<oddcount<<endl;

  return 0;
}
