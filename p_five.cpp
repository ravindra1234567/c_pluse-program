#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int asize;
        cin>>asize;
        int a[asize];
        for(int i=0;i<asize;i++)
            cin>>a[i];
        int pos,temp,c=0;
        cin>>pos;
        temp = a[pos-1];
        for(int j=0;j<asize;j++)
        {
            if(a[j]<temp)
            {
                c++;
            }

        }
        cout<<c+1<<endl;
    }

    return 0;
}
