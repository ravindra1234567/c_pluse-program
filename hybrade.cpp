#include<iostream.h>
class A
 {
  protected:
  int a,b,c;
  public:
  void mul(int x,int y)
	{
	 a=x;
	 b=y;
	 c=a*b;
	 cout<<"FIRST CLASS"<<"\n\n";
	 cout<<"Resutl Of A*B= ";
	 cout<<c;
	 cout<<"\n\n";
	 }
	};
  class B:public A
	{
	public:
	void add()
	{
	int e,f=3,g=2;
	e=f+g;
	cout<<e;
	}
	};
	class minus
	{
		public:
		void sub()
		{
		int d,h=5,t=6;
		d=h-t;
		cout<<"SECOND CLASS"<<"\n\n";
		cout<<"Result Of H-T= ";
		cout<<d;
		cout<<"\n\n";
		}
	};
	class result:public A,public minus
	{
	public:
	};
	class C:public B
	{
	 public:
	 void div()
	{
	 int p=4,q=2,t;
	 t=p/q;
	 cout<<"THIRD CLASS"<<"\n\n";
	 cout<<"Result Of P/Q= ";
	 cout<<t;
	 cout<<"\n\n";
	 }
	};
 void main()
 {
result r;
r.mul(2,7);
r.sub();
C z;
z.div();
cout<<"NAME=JAGDEESH KUSHWAHA";
cout<<"\n"<<"ROLL No. 15025C04026";
 }


