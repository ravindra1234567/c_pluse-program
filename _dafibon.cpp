#include<iostream.h>
void main()
{
	int a=1,b=1,c,num,i;
	cout<<"Enter the of num= ";
	cin>>num;
	cout<<"\n"<<"Entered valu of a= "<<a;
	cout<<"\n"<<"Entered valu of b= "<<b<<"\n\n";
	cout<<"FIBONACCI RESULT= ";
	for(i=1;i<=num;i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<"\n"<<"\t\t"<<c;
	}
	cout<<"\n"<<"NAME= JAGDEESH KUSHWAHA"<<"\n";
	cout<<"Roll No.= 15025C04026";

}