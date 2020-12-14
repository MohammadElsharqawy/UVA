#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
const int N=100000;
vector<int>adj[N];

int cnt=0;
int vis[N],vid=0;
void dfs(int n)
{

    cnt++;
    vis[n]=vid;
    for(int v:adj[n])
    {
      if(vis[v]==vid)continue;
        dfs(v);
    }


}





int main(){

    int t;cin>>t;
    cin.ignore();
    while(t--)
    { vid++;
        string m;
for(int i=0;i<30;i++)
    adj[i].clear();
        while(cin>>m && m[0]!='*')
        {
           adj[m[1]-'A'].push_back(m[3]-'A');
            adj[m[3]-'A'].push_back(m[1]-'A');
        }
        getline(cin,m);
        getline(cin,m);


int tree=0,corn=0;
for(int i=0;i<m.size();i+=2)
{  if(vis[(int)m[i]-'A']==vid)continue;
    cnt=0;
    dfs(m[i]-'A');
if(cnt>1)
    tree++;
else if(cnt==1 )
    corn++;
}
        cout<<"There are "<<tree<<" tree(s) and "<<corn<<" acorn(s).\n";


    }



    return 0;
}
