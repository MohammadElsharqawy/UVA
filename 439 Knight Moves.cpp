#include<bits/stdc++.h>
using namespace std;
const int N=100;
map<char,int> mp;
int dis[N][N];
const int dx[]={-1,1,1,-1,2,-2,2,-2};
const int dy[]={2,2,-2,-2,-1,1,1,-1};
int vis[N][N],vid;
pair<int,int>q[N];int qsz;
bool valid(int i,int j)
{
    if(i<=0 || i>8 || j<=0 || j>8)
        return false;

    return true;
}
int snki,snkj;
void bfs(int si,int sj)
{ ++vid;
qsz=0;
    vis[si][sj]=vid;
    dis[si][sj]=0;
    q[qsz++]={si,sj};

    for(int k=0;k<qsz;k++)
    {
       int i=q[k].first,j=q[k].second;
       if(i==snki && j==snkj) return;
          for(int y=0;y<8;y++)
          {
              int ni=i+dx[y],nj=j+dy[y];
              if(!valid(ni,nj))continue;
              if(vis[ni][nj]==vid)continue;
              q[qsz++]={ni,nj};
                dis[ni][nj] = dis[i][j]+1;
                vis[ni][nj]=vid;
          }
    }
}
int main()
{



    char c1[100],c2[100];
    while(scanf("%s%s",c1,c2)!=EOF)
    {
        memset(dis,0,sizeof(dis));
 snki=c2[1]-'0';snkj=c2[0]-'a'+1;
        bfs(c1[1]-'0',c1[0]-'a'+1);
        int sol=(int)dis[snki] [snkj ];
       printf("To get from %s to %s takes %d knight moves.\n",c1,c2, sol );
    }



    return 0;
}
