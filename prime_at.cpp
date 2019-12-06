#include<iostream.h>
class A
{
private:
int i,n,count;
public:
void get()
{
cout<<"Enter the value"<<"\n";
}
void set(int l)
{
n=l;
}
void fun()
{
for(i=2;i<=n/i;i++)
 {
 if(n%i==0)
 {
 int count=0;
 break;
 }
 else
 {
 count=0;
 count=count+1;
 }
 }
 if(count==1)
 {
 cout<<"RESULT=>   prime number"<<"\n";
 }
 else
{
cout<<"RESULT=> Not prim number"<<"\n";
}
}
};
void main()
{
A u;
u.get();
u.set(8);
u.fun();
cout<<"\n"<<"NAME=JAGDEESH KUSHWAHA";
cout<<"\n"<<"ROLL No. 15025C04026";
}

