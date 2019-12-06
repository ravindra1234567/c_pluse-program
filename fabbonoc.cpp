#include<iostream.h>
void main()
{
 int i,f1=0,f2=1,n,f3;
 cout<<"Enter the value"<<"\n";
 cin>>n;
 cout<<"RESULT"<<"\n"<<"\n";
 cout<<"FEBBONOCI=>"<<f2<<"\n";
 for(i=0;i<n;i++)
 {
 f3=f1+f2;
 f1=f2;
 f2=f3;
 cout<<"FEBBONOCI=>"<<f3<<"\n";
 }
 cout<<"\n"<<"=>RAVINDRA KUMAR KUSHWAHA ROLL NUMBER 15025C04048";
 }
