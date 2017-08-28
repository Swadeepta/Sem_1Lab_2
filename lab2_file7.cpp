#include <iostream>
int main()
{
 double a=0,b=0,c=0;
 again:
 std::cout<<"Enter the two angle of a traingle (in degrees) ";
 std::cin>>a>>b;
 if(a+b >= 180)
  {
  std::cout<<"\nSum of two angles of a traingle never can be 180 degree or more .... Enter Again!!!";
  goto again;
  }
 c=180-(a+b);
 std::cout<<"\nTherefore the third angle is "<<c<<" Degrees";
 return 0;
}
