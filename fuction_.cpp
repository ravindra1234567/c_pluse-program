#include<iostream.h>
class A
{
public :
void print(int f)
{
cout<<"RESULT FIRST=> "<<"\n";
cout<<"\n"<<"\t\t"<<"print integer value=  "<<f;
}

void print(int a,int b)
{
 cout<<"\n"<<"RESULT SECOND=> "<<"\n";
cout<<"\n"<<"\t\t"<<"print integer value=  "<<a;
cout<<"\n"<<"\t\t"<<"print integer value=  "<<b<<"\n";
}
void print(int d,int e,int g)
{
cout<<"RESULT THIRD=> "<<"\n";
cout<<"\n"<<"\t\t"<<"print integer value=  "<<d;
cout<<"\n"<<"\t\t"<<"print integer value=  "<<e;
cout<<"\n"<<"\t\t"<<"print integer value=  "<<g;
}
};
void main()
{
int j,l,k,p,g,y;
cout<<"Enter the first elements=>";
cin>>j;
cout<<"Enter the second elements=>";
cin>>l;
cout<<"\t\t\t";
cin>>k;
cout<<"Enter the third elements=>";
cin>>p;
cout<<"\t\t\t";
cin>>g;
cout<<"\t\t\t";
cin>>y;
 A a;
 a.print(j);
 a.print(l,k);
 a.print(p,g,y);
 cout<<"\n\n"<<"NAME= JAGDEESH KUSHWAHA"<<"\n";
 cout<<" ROLL No. 15025C04026";
 }