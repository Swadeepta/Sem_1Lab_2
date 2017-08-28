#include <iostream>
int main()
{
 double f;
 long double c;
 std::cout<<"\t\tEnter Temperature (in Fahrenhiet) : ";
 std::cin>>f;
 c=((f-32)*5)/9;
 std::cout<<"\n\nEntered Temperature (in Fahrenhiet) : "<<f<<"\tTemperature (in Celsius) : "<<c;
 return 0;
}
