#include<bits/stdc++.h>
using namespace std;
const int N=10000;


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
        {
            return 0;
        }

        if(sz[u]>sz[v]) swap(u,v);

        par[u]=v;
        sz[v]+=sz[u];
        --nsets;
        return 1;

    }


};

int n;
struct edge{
    int f,t;double c;
};
vector<edge>edges;
edge inpt;
pair<double,double>point[N];

double kruskal()
{
    DSU dsu(n);
    double mst=0;
    sort(edges.begin(),edges.end(),[](edge v1 ,edge v2){
       return v1.c < v2.c;
    });
    for(int i=0;i<edges.size();i++)
    {
        if(dsu.join(edges[i].f,edges[i].t))
            mst+=edges[i].c;
    }

    return mst;
}



int main()
{
 cout<<fixed<<setprecision(2);
   int t;cin>>t;
   while(t--)
   { edges.clear();
       cin>>n;
       for(int i=0;i<n;i++) {
           double f,s;
           cin>>f>>s;
           point[i]={f,s};

       };
       for(int i=0;i<n-1;i++) {
           for(int j=i+1;j<n;j++) {

               double dis=hypot(point[i].first-point[j].first,point[i].second-point[j].second);
               inpt.f=i;
               inpt.t=j;
               inpt.c=dis;
               edges.push_back(inpt);
           }


       }

       cout<<kruskal()<<endl;
      if(t)cout<<endl;
   }





    return 0;
}
