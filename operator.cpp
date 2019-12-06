#include<iostream.h>
class S
{
public:
int a,b,d;
void setdata()
{
cin>>a;
cin>>b>>d;
}
void showdata()
{
cout<<"RESULT:="<<a<<","<<b<<","<<d<<"\n";
}
S operator+(S j)
{
S temp;
temp.a=a+j.a;
temp.b=b+j.b;
temp.d=d+j.d;
return temp;
}
};
void main()
{
S f1,f2,f3,f4;
cout<<"enter the first elements=>"<<"\n";
f1.setdata();
cout<<"enter the second elements=>"<<"\n";
f2.setdata();
cout<<"enter the third elements=>"<<"\n";
f3.setdata();
f4=f1+f2+f3;
f4.showdata();
cout<<"NAME=JAGDEESH KUSHWAHA";
cout<<"\n"<<"ROLL No. 15025C04026";
}