#include<bits/stdc++.h>
using namespace std;




vector<int>v;
map<int,int>mp;


int main()
{

    int n;
    while(cin>>n)
    {
        if(mp.count(n)==0)
        {
            v.push_back(n);
            mp[n]++;
        } else
            mp[n]++;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<mp[v[i]]<<endl;
    }
    return 0;
}
