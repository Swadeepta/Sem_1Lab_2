#include <iostream>
int main()
{
 unsigned long int day;
 int y,w,d;
 std::cout<<"Number of Days : ";
 std::cin>>day;
 y=day/365;
 w=(day%365)/7;
 d=(day%365)%7;
 std::cout<<"\n Entered no. of Days :"<<day;
 std::cout<<"\n Years : "<<y<<"\t Weeks : "<<w<<"\t Days : "<<d;
 return 0;
}
