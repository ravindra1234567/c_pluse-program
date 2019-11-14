#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printInBinary(int num)
{
    int n = CHAR_BIT*sizeof(num);
    //cout<<n;
    stack<bool>s;
    for(int i =1;i<=n;i++)
    {
        s.push(num%2);
        cout<<"% = "<<num<<endl;
        num = num/2;
        cout<<" / "<<num<<endl;
    }
    for(int j=1;j<=n;j++)
    {
        cout<<s.top();
        s.pop();
         // Put a space after every byte.
        if (j % CHAR_BIT == 0)
        cout << " ";

    }
}
int main()
{
     int n1;
    cout<<"Please Enter any Integer Number ";
    cin>>n1;
    printInBinary(n1);
        return 0;
}
