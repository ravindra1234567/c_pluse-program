#include <iostream>
#include<math.h>
using namespace std;
int main() {
	int n;
	cout<<"Enter No";
	cin>>n;
	while(n!=0)
	{
	    int a=2,c,b=0;
	    cout<<"b";
	    cin>>c;
	    while(c!=0)
	    {
	        b = (b+pow(a,2));
	        //cout<<"sqrt"<<b<<"\n";
	        a = (a+2);
	        c--;
	    }
	    cout<<b<<"\n";
	   n--;
	}
	return 0;
}
