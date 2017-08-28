#include<iostream>
#include<math.h>
int main()
{
 int x,y;
 long double a;
 std::cout<<"\t\tEnter Base and Exponent respectively : ";
 std::cin>>x>>y;
 a=pow(x,y);
 std::cout<<"\n\n\t\tThe value of x^y is "<<a;
 return 0;
}
