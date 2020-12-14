#include <bits/stdc++.h>
using namespace std;
const int N=100000;
vector<int>adj[N];
int vis[N],vid=0;
int cnt=0;
void dfs(int src)
{
    

    for(int v : adj[src])
    {
        if(vis[v]==vid)continue;
        cnt++;
        vis[v]=vid;
        dfs(v);

    }


}


int main()
{
    int n;
    while(cin>>n && n) {
        int e, t;
for(int i=0;i<n;i++)
{
    adj[i].clear();
}
        while (cin >> e && e) {
            --e;
            while (cin >> t && t) {
                adj[e].push_back(--t);

            }
        }

        int q;
        cin >> q;
        while (q--) {
            cnt = 0;
            vid++;
            int src;
            cin >> src;
            src--;
            dfs(src);
            cout << n - cnt ;


            for (int i = 0; i < n; i++) {
                if (vis[i] != vid) {
                    cout<<" "<< i + 1 ;
                }
            }
            cout << endl;

        }
    }


    return 0;
}
