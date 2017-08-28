#include <iostream>
int main()
{
 double c,f;
 std::cout<<"\t\tEnter Temperature (in Celsius) : ";
 std::cin>>c;
 f=((9*c)/5)+32;
 std::cout<<"\n\nEntered Temperature (in Celsius) : "<<c<<"\tTemperature (in Fahrenhiet) : "<<f;
 return 0;
}
