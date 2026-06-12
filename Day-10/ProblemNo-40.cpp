//Write a program to print character pyramid
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
      for(int j=1; j<=n-i; j++)
      {
        cout<<" ";
      }

      for(int k=1; k<=i; k++)
      {
        cout<<char(k+64)<<" ";
      } 

      for(int p=1; p<=i-1; p++)
      {
        cout<<char(i-p+64)<<" ";
      }
      cout<<endl;
    }

    return 0;
}  