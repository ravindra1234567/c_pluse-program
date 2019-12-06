#include<iostream.h>
class A
{
public:
int a,b,c,choice;
A()
{
cout<<"Enter the value:-"<<"\n";
cin>>a>>b;
cout<<"1.sum"<<"\n"<<"2.sub"<<"\n"<<"3.mul"<<"\n"<<"4.divide" ;
cout<<"Enter the choice value"<<"\n";
cin>>choice;
	 switch(choice)
{
case 1:
		c=a+b;
		break;
case 2:
		c=a-b;
		break;
case 3:
		c=a*b;
		break;
case 4:
	  c=a/b;
	  break;
defoult:
cout<<"not valid case" ;
}
cout<<"ouput is:-"<<c<<"\n";
}
 };

void main()
{
A s;
s.c;
cout<<"NAME=JAGDEESH KUSHWAHA";
cout<<"\n"<<"ROLL No. 15025C04026";
}

