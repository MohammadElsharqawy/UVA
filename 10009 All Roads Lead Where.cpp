#include <bits/stdc++.h>
using namespace std;
const int N=10000;
vector<int>adj[N];

int vis[N],vid;
int par[N];
int snk;
void bfs(int src)
{
    vid++;
    memset(par,0,sizeof(par));
    queue<int>q;
    q.push(src);
    vis[src]=vid;
    par[src]=-1;
    while(!q.empty())
    {
            int u=q.front();
            q.pop();
            if(u==snk)return;
            for(int v:adj[u])
            {
                if(vis[v]==vid)continue;
                q.push(v);
                vis[v]=vid;
                par[v]=u;
            }

    }


}

void print (int u)
{
    if(u==-1) return;
    print(par[u]);
    cout<<(char)(u+'A');
}



int main()
{

  int t;cin>>t;
  while(t--)
  {

      int e,q;cin>>e>>q;
      string m1,m2;
      for(int i=0;i<=10000;i++)
          adj[i].clear();

      for(int i=0;i<e;i++)
      {cin>>m1>>m2;
     adj[m1[0]-'A'].push_back(m2[0]-'A');
          adj[m2[0]-'A'].push_back(m1[0]-'A');
      }

      while(q--) {

        string m3,m4;
       cin>>m3>>m4;
          snk=m4[0] - 'A';
          bfs(m3[0] - 'A');
          print(m4[0] - 'A');
          cout<<endl;

      }
if(t)cout<<endl;
  }



    return 0;
}
