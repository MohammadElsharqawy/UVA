#include <bits/stdc++.h>
using namespace std;
char arr[52][3];
int vis[52];
int main()
{
int t,cnt=0;cin>>t;
while(t--)
{ cnt++;
    memset(vis , 0, sizeof vis);

  for(int i=0;i<52;i++)
    {
        scanf("%s",arr[i]);
    }
    int y=0;int x=0;
    for(int i=0,pos=26;i<3;i++)
    {
        if(arr[pos][0]>='2'&&arr[pos][0]<='9')
         x=arr[pos][0]-'0';
    else
        x=10;

        y+=x;
        vis[pos--]=1;

   int r=10-x;
   for(int i=0;i<r;i++)
   {
       vis[pos--]=1;
   }

}
cout<<"Case "<<cnt<<":"<<" ";

for(int i=0,j=0;;i++)
{
    if(!vis[i])
    {
        j++;
    }
    if(y==j)
    {
        cout<<arr[i]<<"\n";
        break;
    }
}


}

return 0;
  }
