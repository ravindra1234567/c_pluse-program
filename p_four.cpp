#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int arr;
        cin>>arr;
        int a[arr];
       int  def = pow(10,9);
        for(int i=0;i<arr;i++){
            cin>>a[i];}
        for( int i=0;i<arr;i++)
        {
            for(int j=0;j<arr;j++)
                {
                    if(i==j)
                    {
                        continue;

                    }
                    if(abs(a[i]-a[j])<def)
                    {
                        def = abs(a[i]-a[j]);

                    }
              }
        }
           cout<<def<<endl;

        }

    }

