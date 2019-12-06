#include<iostream.h>
void main()
{
	int a,b,i,gcd;
	cout<<"\n"<<"Enter the value of a= ";
	cin>>a;
	cout<<"\n"<<"Enter the value of b= ";
	cin>>b;
	for(i=1;i<a&&i<b;i++)
	{
		if(a%i==0&&b%i==0 )
		{
			gcd=i;
		}
	}
	cout<<"\n"<<"GCD RESULT= "<<gcd<<"\n";
	cout<<"\n"<<"NAME= JAGDEESH KUSHWAHA"<<"\n";
	cout<<"Roll No.= 15025C04026";
}