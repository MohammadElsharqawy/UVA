#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//int dp[10003][10000];

int dp[10003][100];

int n,k;bool fd=0;
int arr[10003];

int solve(int i,int mod) {

    if (i == n) {
        if (mod == 0)return 1;
        else
        return 0;
    }
  int &ret=dp[i][mod];
  if(~ret) return ret;
   ret = solve(i + 1, ((mod + arr[i]%k)%k+k)%k);
    ret |= solve(i + 1, ((mod - arr[i]%k)%k+k)%k);

    return ret;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

//freopen("students.in","r",stdin);

int t;cin>>t;
while(t--){
cin>>n>>k;
memset(dp,-1,sizeof dp );
for(int i=0;i<n;i++)cin>>arr[i];
bool a=solve(1,arr[0]%k);
if(a){
    cout<<"Divisible\n";

} else{
    cout<<"Not divisible\n";
}

}
    return 0;
}
