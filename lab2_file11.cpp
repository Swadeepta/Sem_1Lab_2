


#include<iostream>
using namespace std;

int main()
{
	int p,r,t;
	long int i;
	cout<<"Enter Principle : ";
	cin>>p;
	cout<<"\nEnter Rate : ";
	cin>>r;
	cout<<"\nEnter Time : ";
	cin>>t;
	i=(p*r*t)/100;
	cout<<"Simple interest is : "<<i;
    return 0;
}

