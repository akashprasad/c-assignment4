# c-assignment4
// question 2
#include<iostream>
using namespace std;
void circle()
{
  float r,d,cr,a;
  cout<<"Enter radius of circle : ";
  cin>>r;
  d=2*r;
  cr=3.14*d;
  a=3.14*r*r;
  cout<<"radius of circle : "<<r<<endl;
  cout<<"Diameter of circle : "<<d<<endl;
  cout<<"Circumference of the circle : "<<cr<<endl;
  cout<<"Area of the circle : "<<a;
}
int main()
{
 circle();
 return 0;
}
