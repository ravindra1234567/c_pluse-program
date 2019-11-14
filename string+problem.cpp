#include<bits/stdc++.h>
using namespace std;
long j=1;
 int hello(int n)
{
    if(n>=1)
    {
        for(int i=0;i<10;i++)
        {
            cout<<"hello  "<<j<<endl;
            j++;
             hello(n-1);
        }


    }
    //return n;

}
int main()
{
    int a;
    cin>>a;
    hello(a);
    return 0;

}
