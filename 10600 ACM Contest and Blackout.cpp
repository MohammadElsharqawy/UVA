/*

uva 1541 1st and 2nd mst
*/



#include<bits/stdc++.h>
using namespace std;
const int N=10800;
int mod=1e9+7;
typedef long long ll ;
int n,e;
struct DSU{
    int par[N],sz[N],nsets;
    void init (int n){
        nsets=n;
        iota(par,par+n,0);
        fill(sz,sz+n,1);
    }

    int find(int u){

        return u==par[u]?u:par[u]=find(par[u]);
    }

    bool join(int v,int u){
        u=find(u),v=find(v);
        if(u==v) return 0;

        if(sz[u]>sz[v]) swap(u,v);

        par[u]=v;
        sz[v]+=sz[u];
        --nsets;
        return 1;
    }

};
struct edge {
    int f,t,c;
};
vector<int>took;
vector<edge>edges;
DSU dsu;
int kruskal(){

    dsu.init(n);
    int mst=0;
    for(int i=0;i<edges.size();i++){
        if(dsu.join(edges[i].f,edges[i].t)){
            mst += edges[i].c;
            took.push_back(i);
        }
    }
    return mst;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--) {
        edges.clear();
        took.clear();
        cin >> n >> e;
        for (int i = 0; i < e; i++) {
            int f, tt, c;
            cin >> f >> tt >> c;
            edges.push_back({--f, --tt, c});
        }

        sort(edges.begin(), edges.end(), [](edge v1, edge v2) {
            return v1.c < v2.c;
        });

        int stmst = kruskal();
        int mn = INT_MAX;
        int ans2=INT_MAX; ;
        for (int j:took) {
            int mst = 0;int y=0;
            dsu.init(n);
            for (int i = 0; i < edges.size(); i++) {
                if(j==i) continue;
                if (dsu.join(edges[i].f, edges[i].t)) {
                    mst += edges[i].c;
                    y++;
                }

            }
            
            if(y==n-1)
            ans2=mst< ans2?mst:ans2;

        }
        cout<<stmst<<" "<<ans2<<endl;
    }

    return 0;
}

