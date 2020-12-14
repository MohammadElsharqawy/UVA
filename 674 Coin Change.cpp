#include <bits/stdc++.h>
using namespace std;

int coins[]={50,25,10,5,1};
int dp[6][7490];
int take(int i,int sum)
 { if(sum==0) return 1;
    if(i==5)
    {
        return 0;
    }
int &ret = dp[i][sum];
     if(~ret) return ret;

    ret = take(i+1,sum);
   if(sum >= coins[i])
 ret += take(i,sum-coins[i]);

return ret;

}




int main()
{
    int n;
    while (cin>>n)
    {  memset(dp,-1,sizeof(dp));

cout<<take(0,n)<<endl;


    }




    return 0;
}
