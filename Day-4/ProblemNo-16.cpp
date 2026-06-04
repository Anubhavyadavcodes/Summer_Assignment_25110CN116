//Write a program to print armstrong numbers in a range
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int start,end;
  cout<<"Enter starting number: ";
  cin>>start;
  cout<<"Enter ending number: ";
  cin>>end;
  
  cout<<"Armstrong numbers are: ";

  for(int num=start;num<=end;num++)
  {
    int temp=num,digits=0,sum=0;

    //Counting of digits
    while(temp>0)
    {
      digits++;
      temp=temp/10;
    }
    temp=num;

    //calculate Armstrong sum
    while(temp>0)
    {
      int digit=temp%10;
      sum=sum+pow(digit,digits);
      temp=temp/10;
    }
    if (sum==num)
    {
      cout<<num<<" ";
    }
  }
  return 0;
}
