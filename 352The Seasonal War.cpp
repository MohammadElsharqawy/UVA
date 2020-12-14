#include <bits/stdc++.h>
using namespace std;

const int N=30;

char arr[N][N];
int vis[N][N],vid=0;

const int dx[]={1,-1,0,0,1,-1,1,-1};
const int dy[]={0,0,1,-1,1,-1,-1,1};
int n;
bool valid(int i,int j)
{
    return i<n && i>=0 && j>=0 && j<n && vis[i][j]!=vid && arr[i][j]=='1';
}


void dfs(int i ,int j)
{

    vis[i][j]=vid;
    for(int x=0;x<8;x++)
    {
        int nx=i+dx[x],ny=j+dy[x];

        if(!valid(nx,ny)) continue;
        vis[nx][ny]=vid;
        dfs(nx,ny);

    }

}





int main()
{


int tt=1;
while(cin>>n) {
    vid++;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int com = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (vis[i][j] != vid && arr[i][j] =='1') {
                com++;
                dfs(i, j);
            }
        }
    }
  cout<<"Image number "<<tt++<<" contains "<<com<<" war eagles.\n";
}
    return 0;
}
