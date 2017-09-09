# c-assignment4
// question 3
#include<iostream>
using namespace std;
void max_min()
{
 int a,b;
 cout<<"Enter two numbers : ";
 cin>>a>>b;
 if(a>b)
 {
  cout<<a<<" maximum"<<endl;
  cout<<b<<" minimum";
 }
 else if(b>a)
 {
  cout<<b<<" maximum"<<endl;
  cout<<a<<" minimum";
 }
 else
  cout<<a<<" and "<<b<<" are equal.";
}
int main()
{
 max_min();
 return 0;
}
