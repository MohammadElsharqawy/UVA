#include <bits/stdc++.h>
using namespace std;

long long merge(int arr[],int st,int en)
{
    int i=st,mid=(st+en)/2,j=mid+1;
    int idx=0;long long totalin=0;
    int *a=new int[en-st+1];
    while(i<=mid&&j<=en){
        if(arr[i] <= arr[j])
          a[idx++]=arr[i++];

    else
    {
        a[idx++]=arr[j++];
        totalin+=(mid-i+1);
    }
    }
    while(i<=mid)
    {
          a[idx++]=arr[i++];
    }
    while(j<=en){
         a[idx++]=arr[j++];
    }
    for(int i=st;i<=en;i++)
    {
        arr[i]=a[i-st];
    }
    return totalin;
}

long long mergesort(int arr[],int st,int en)
{ if(en<=st) return 0;
    long long total=0;
    int mid=(st+en)/2;
    total+=mergesort(arr,st,mid);
    total+=mergesort(arr,mid+1,en);

    total+=merge(arr,st,en);


    return total;
}
int arr[500005];
int main()
{  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
  int n;while(1)
  { cin>>n;
  if(!n)break;
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      cout<< mergesort(arr,0,n-1)<< endl;

  }
return 0;
  }
