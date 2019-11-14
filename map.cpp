#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,key,value;
     map<int , int> map1;
    cout<<"Enter the how many element want to insert in map = ";
    cin>>n;
   for(int i=1;i<=n;i++) {
        cout<<"Enter the Key = ";
        cin>>key;
        cout<<"Enter the Value = ";
        cin>>value;
        map1.insert(make_pair(key,value));
    }



    map<int,int>::iterator  itr;
    for(itr= map1.begin(); itr!=map1.end(); ++itr)

    {
        cout<<"Key = "<<itr->first<<"  "<<"Value = "<<itr->second<<endl;
    }
    return 0;

}
