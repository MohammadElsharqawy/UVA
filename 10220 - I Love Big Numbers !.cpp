#include <bits/stdc++.h>
using namespace std;
int arr[100000];
int main(){

int n;
 while(cin>>n){

 memset(arr,0,sizeof arr);
 int m=1; //m is the size of the digits we store in  arr
 arr[0]=1;
 int carry=0;
 for(int i=1;i<=n;i++)
 {
     for(int j=0;j<m;j++)
     {
         int x=arr[j] *i + carry;
         arr[j]=x % 10;
         carry= x / 10;
     }
     while(carry>0)
     { arr[m] = carry%10;
     carry /= 10;
     m++;
     }
 }
long long sum=0;
  for(int i=0;i<m;i++)
  {
     sum+=arr[i];
  }
  cout<<sum<<"\n";

 }

return 0;
}
