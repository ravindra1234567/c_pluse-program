#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int , int> map1;

    map1.insert(make_pair(1,10));
    map1.insert(make_pair(2,11));
    map<int,int>::iterator  itr;
    for(itr= map1.begin(); itr!=map1.end(); ++itr)

    {
        cout<<itr->first<<"  "<<itr->second<<endl;
    }
    return 0;

}
