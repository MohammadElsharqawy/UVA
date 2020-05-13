#include <bits/stdc++.h>
using namespace std;

int main()
{  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int n;
while(cin>>n&&n!=0){
   int arr[103][103]={};
int cnt1=0,sum=0,cnt=0,u,k;

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
        cin>>arr[i][j];
}


for(int i=0;i<n;i++)
{  sum=0;
    for(int j=0;j<n;j++)
    {
        sum+=arr[i][j];
    }
    if(sum & 1)
        {cnt1++;k=i;}
}
if(cnt1>1){
    cout<<"Corrupt"<<endl;
continue;}

for(int i=0;i<n;i++)
{ sum=0;
    for(int j=0;j<n;j++)
    {
        sum+=arr[j][i];
    }

    if(sum & 1)
       {cnt++; u=i;
}}

    if(cnt>1)
    {cout<<"Corrupt"<<endl;continue;}


    if(!cnt&&!cnt){cout<<"OK"<<endl;continue;}

    if(cnt==1 && cnt1==1)
        cout<<"Change bit ("<<k+1<<","<<u+1<<")"<<endl;
}
return 0;
  }
