#include<bits/stdc++.h>
using namespace std;

int vis[101],vid;
vector<int>adj[101];
vector<int>vi;
void dfs(int n)
{
    vis[n]=vid;
    for(int v : adj[n] )
    {
        if(vis[v]==vid)continue;

        vis[v]=vid;
        dfs(v);

    }
vi.push_back(n);

}




int main()
{

int n,m;
while(cin>>n>>m ,(n||m)) {++vid;
       vi.clear();
       for(int i=0;i<n;i++)
           adj[i].clear();
        for (int i = 0; i < m; i++) {

            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);

        }

        for (int i = 1; i <= n; i++)
            if (vis[i] != vid)
            dfs(i);
        for (int i=vi.size()-1; i>=0;i--)
            cout<<vi[i]<<" \n"[i==0];
    }
    return 0;
}
