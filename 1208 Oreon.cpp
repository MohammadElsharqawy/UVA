#include<bits/stdc++.h>
using namespace std;
const int N=100000;



struct edges{

    int f,t,c;
};

struct DSU{
    int par[N],sz[N],nsets;
    DSU(int n)
    {
        nsets=n;
        iota(par,par+n,0);
        fill(sz,sz+n,1);
    }

    int find(int u)
    {
        return u==par[u] ? u :par[u]=find(par[u]);
    }

    bool join(int u,int v)
    {
         u=find(u),v=find(v);
        if(u==v)
            return 0;

        if(sz[u]>sz[v]) swap(u,v);

        par[u]=v;
        sz[v]+=sz[u];
        --nsets;
        return 1;
    }


};
vector<edges>ans;
int n;
edges inp;
bool cmp(edges v1,edges v2)
{
    
        return v1.c < v2.c;

}
void kruskal()
{
    DSU dsu(n);
 sort(ans.begin(),ans.end(),cmp);

 for(auto & an : ans) {

     if (dsu.join(an.f,an.t))
     {
         cout<<(char)(an.f+'A')<<"-"<<(char)(an.t+'A')<<" "<<an.c<<endl;
     }
 }
}

int main()
{

 int t,tt=1;cin>>t;
    while(t--)
    {
        ans.clear();
        cin>>n;
        cout<<"Case "<<tt++<<":"<<endl;
        for(int i=0;i<n;i++) {
            for (int j = 0; j < n; j++) {
                int a;
                char c;
                scanf("%d", &a);
                if(j!=n-1) scanf("%c",&c);
                if (a && i <= j) {
                    inp.f = i;
                    inp.t = j;
                    inp.c = a;
                    ans.push_back(inp);
                }
            }

        }
        kruskal();

    }


    return 0;
}
