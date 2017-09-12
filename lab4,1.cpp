# c-assignment4
// question 1
#include<iostream>
using namespace std;
void cube(int a)
{
  int cu;
  cu=a*a*a;
  cout<<"Cube of the number : "<<cu;
}
int main()
{
  int num;
  cout<<"Enter a number : ";
  cin>>num;
  cube(num);
  return 0;
}
