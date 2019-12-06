#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,fect=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        unsigned long long int fect=1;
    while(input>1)
    {
        fect = input*fect;
        input--;
    }
    cout<<fect<<endl;
    }
    return 0;

}
