#include<iostream>
#include<math.h>
int main()
{
 double a=0,s=0;
 std::cout<<"Enter the side length of the equilateral traingle : ";
 std::cin>>s;
 a=s*s*sqrt(3)/2;
 std::cout<<"\nTherefore the area of the traingle is "<<a<<" unit";
 return 0;
}
