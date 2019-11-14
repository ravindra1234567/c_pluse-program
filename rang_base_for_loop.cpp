#include<iostream>
using namespace std;
#include<vector>
#include<map>
  void fun(int n)
        {
            if(n>0)
            {
                fun(n-1);
                cout<<n<<endl;
            }
        }
int main()
{
    vector<int> v = {1,2,3,4,5,6};
    for(auto i : v)
    {
        cout<<i<<' ';
    }
    cout<<endl;
    for(int j : {1,2,3,4,5})
    {
        cout<<j<<' ';
    }
    cout<<endl;
    int arr[] = {4,5,6,7,8,9};
    for(int n : arr)
    {
        cout<<n<<' ';
    }
    cout<<endl;
    map<int,int> MAP({{1,1},{2,2},{3,3},{4,4}});
    for(auto m : MAP)
    {
    cout<<m.first<<m.second<<' ';
     }


        fun(10);
        int i=0;
        cout<<endl;
        begin:
            i = i+1;
            cout<<i<<endl;
            if(i<10)
                goto begin;
        return 0;
}
