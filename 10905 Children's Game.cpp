#include<bits/stdc++.h>
using namespace std;
bool cmp(string m ,string n)
{

    return m+n > n+m;
}

vector<string>v;
int main()
{


int n;
while(cin>>n && n)
{ v.clear();
    for(int i=0;i<n;i++)
    {  string r;cin>>r;
        v.push_back(r);
    }
sort(v.begin(),v.end(),cmp);

    for(int i=0;i<n;i++)
    {
        cout<<v[i];
    }
    cout<<endl;
}




    return 0;
}
