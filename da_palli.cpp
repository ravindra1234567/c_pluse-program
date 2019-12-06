#include<iostream.h>
void main()
{
	int num,rever=0,reminder,temp;
	cout<<"\t"<<"Enter the value of num= ";
	cin>>num;
	temp=num;
	while(num!=0)
	{
		reminder=num%10;
		rever=rever*10+reminder;
		num=num/10;
	}
	if(temp==rever)
	{
		cout<<"\n"<<"\t"<<"RESULT=  No.is pallindrom"<<"\n\n";
	}
	else
		 {
			cout<<"\n"<<"\t"<<"RESULT=  No. is not pallindrom"<<"\n\n";
		 }

	  cout<<"\t"<<"NAME= JAGDEESH KUSHWAHA"<<"\n\n";
	  cout<<"\t"<<"Roll No.= 15025c04026";
}