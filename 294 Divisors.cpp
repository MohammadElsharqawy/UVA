#include<bits/stdc++.h>
using namespace std;



int cnt=0;
int generatediv(int n)
{  int i;
    for(i=1;i*i<n;i++)
    {
        if(! (n % i) )
            cnt+=2;
    }
    if(i*i==n)
    cnt++;


    return cnt;
};


int main()
{
    int n;cin>>n;
    while(n--)
    {
        int a,b;cin>>a>>b;
       int ans1=0,ans2=0;
for(int i=a;i<=b;i++) {
    int p=generatediv(i);
    if(p > ans2) {
    ans1=i;
    ans2=p;
    }
    cnt=0;
}
   cout<<"Between "<<a<<" and "<<b<<", "<<ans1<<" has a maximum of "<<ans2<<" divisors."<<endl;
}

    return 0;
}
