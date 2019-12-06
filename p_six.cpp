#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int no_prob,un_solve_prob;
        cin>>no_prob>>un_solve_prob;
        set<int> s;
        for(int i=0;i<no_prob;i++)
            s.insert(i+1);
        int solved_prob;
        for(int j=0;j<un_solve_prob;j++)
        {
            cin>>solved_prob;
            s.erase(solved_prob);
        }
        vector<int> v;
        for(auto it = s.begin();it!=s.end();it++)
        {
            v.push_back(*it);
        }
        for(int i=0;i<v.size();i=i+2)
            cout<<v[i]<<" ";
            cout<<endl;
        for(int i=1;i<v.size();i=i+2)
            cout<<v[i]<<" ";
            cout<<endl;

    }
    return 0;
}
