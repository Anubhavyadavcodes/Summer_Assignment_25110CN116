#include<iostream>
using namespace std;
int sumofdigit(int num)
{
  if(num<10)
    return num;
  
  return (num%10)+sumofdigit(num/10);
}

int main()
{
  int num;
  cout<<"Enter the Number: ";
  cin>>num;
  
  cout<<"Sum of digits= "<<sumofdigit(num);
  
  return 0;
}
