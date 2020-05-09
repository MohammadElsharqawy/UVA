#include <bits/stdc++.h>
using namespace std;
int arr[550];
int main(){

string n,m,s;
while(cin>>m>>n){
        memset(arr,0,sizeof arr);
reverse(m.begin(),m.end());
reverse(n.begin(),n.end());
if(m=="0"||n=="0")
{
    cout<<'0'<<"\n";continue;
}
for(int i=0;i<m.size();i++)
{
    for(int j=0;j<n.size();j++)
    {
       arr[i+j]+=(m[i]-'0')*(n[j]-'0');
    }
}
for(int i=0;i<550;i++)
{
      arr[i+1]+=arr[i]/10;
      arr[i]%=10;

}
int idx,i=550;
while(i>=0)
{
    if(arr[i]!=0)
    {
        idx=i;break;
    }
    i--;
}

for(int i=idx;i>=0;i--)
{
    cout<<arr[i];
}
cout<<"\n";

}
return 0;
}
