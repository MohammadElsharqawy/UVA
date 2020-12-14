#include<bits/stdc++.h>
using namespace std;
int n; int coins[11]={5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
long long dp[12][30001];
long long take(int i,int sum)
{
    if(sum==0) return 1;
    if(i==11)
    {
        return 0;
    }
    long long &ret=dp[i][sum];

    if(~ret) return ret;

    ret = take(i+1,sum);

    if( sum >= coins[i])
    {
        ret += take( i ,sum - coins[i] );
    }


    return ret;
}





int main()
{

    double sum1;

    while(cin>>sum1 , sum1 != 0.0) {



int sum=(int) ((sum1+.001)*100);

        memset(dp,-1,sizeof(dp));

        cout <<fixed<<setprecision(2)<<setw(6)<<sum1<<setw(17)<<take(0,sum)<< endl;


    }

    return 0;
}
