#include<iostream.h>
void main()
{
 int n, revers=0,remender,temp;
 cout<<"enter the value"<<"\n";
 cin>>n;
 temp=n;
 while(n!=0)
 {
 remender=n%10;
revers=revers*10+remender;
  n=n/10;
 }

if(temp==revers)
cout<<"RESULT=>planidrome"<<"\n";
else
cout<<"RESULT=>not planidrome"<<"\n";
cout<<"\n"<<"=>RAVINDER KUMAR KUSHWAHA ROLL NUMBER 15025C04048";
}
