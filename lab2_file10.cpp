#include<iostream>
using namespace std;
int main()
{
 double a=0,b=0,c=0,d=0,e=0,avg=0,t=0,p=0,f=0;
 char ch;
 label1:
 cout<<"\nEnter the Full Marks : ";
 cin>>f;
 label2:
 cout<<"\nEnter the marks obtain in 5 subject : ";
 cin>>a>>b>>c>>d>>e;
 if(a > f || b > f || c > f || d > f || e > f)
 {
  cout<<"\nMarks obtain can't be more than full marks"<<"\n Want to revise full marks?If yes, press (y or Y)else press any other button... ";
  cin>>ch;
  if (ch=='y' || ch=='Y')
   goto label1;
  else
   goto label2;
 }
 t=a+b+c+d+e;
 avg=t/5;
 p=avg*100/f;
 cout<<"\n\nTotal Mark Recieved : "<<t<<" out of "<<f*5<<" marks";
 cout<<"\nAverage Marks : "<<avg;
 cout<<"\nPercentage : "<<p;
 return 0;
}
