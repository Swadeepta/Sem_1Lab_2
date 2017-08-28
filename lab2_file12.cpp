#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float p,r,t,i;
	int n;
	cout<<"Enter Principle : ";
	cin>>p;
	cout<<"\nEnter Rate : ";
	cin>>r;
	cout<<"\nEnter Time : ";
	cin>>t;
	cout<<"\nEnter number of time Interest compounded in a year : ";
	cin>>n;
	i=p*pow((1+r/n),(n*t)) - p;
	cout<<"\n\nCompound Interest is : "<<i;
    return 0;
}
