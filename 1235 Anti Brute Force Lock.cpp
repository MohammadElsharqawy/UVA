#include<bits/stdc++.h>
using namespace std;
const int N=10005;


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

        return u==par[u]?u:par[u]=find(par[u]);
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

struct edge{
    int f,t,c;
};
int n;vector<edge>edges;
edge inpt;
int kruskal()
{
    int mst=0;
    DSU dsu (n+1);
    sort(edges.begin(),edges.end(),[](edge v1 ,edge v2){
        return v1.c <v2.c;

    });

    for(int i=0;i<edges.size();i++){

        if(dsu.join(edges[i].f,edges[i].t))
            mst+=edges[i].c;

    }

    return  mst;
}

string arr[N];
int main()
{

    int t;cin>>t;
    while(t--)
    {
        cin>>n;
        edges.clear();
        arr[0]="0000";
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        int best=1000005,besti=0;
        for(int i=1;i<=n;i++) {
            int ret = 0;
            string m="0000";
            string nn= arr[i];
            for (int k = 0; k < 4; k++) {

                int a= abs((m[k] - '0') - (nn[k] - '0'));
                if(a>5) a=10-a;
                ret+=a;
            }
            if(ret<best )
            {
                best=ret;
                besti=i;
            }

        }
        inpt.f = 0;
        inpt.t = besti;
        inpt.c = best;
        edges.push_back(inpt);

        for(int i=1;i<=n-1;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                string m;
                string nn;
               // if(i==j)continue;

                m=arr[i];
                nn=arr[j];
                int ret=0;
                for(int k=0; k < 4; k++)
                {
                    int a=abs((m[k]-'0')-(nn[k]-'0'));
                    if(a>5) a=10-a;
                    ret+=a;
                }
                inpt.f=i;
                inpt.t=j;
                inpt.c=ret;
                edges.push_back(inpt);

            }

        }

        cout<<kruskal()<<endl;

    }


    return 0;
}
