#include <iostream>
int main()
{
 long double cm,m,km;
 std::cout<<"Enter Length (in cm) : ";
 std::cin>>cm;
 m=cm/100;
 km=m/1000;
 std::cout<<"\n\n Entered Length (in cm):"<<cm<<"\tLength (in m):"<<m<<"Length (in km):"<<km;
 return 0;
}
