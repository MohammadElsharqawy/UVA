#include <iostream>
#include<complex>
#include <cstdlib>
#include <vector>
#include <queue>
#include <numeric>
#include <iomanip>
using namespace std;

vector<int>v;
int main(){

int sum,n;
while(cin>>sum>>n)
    {
       v.resize(n);

for(int i=0;i<n;i++)
   cin>>v[i];
int sumb=0,ans=0,best=0;
for(int mask=0 ;mask<(1<<v.size());mask++)
{   int ss=0;ans=0;
    for(int i=0;i<v.size();i++)
    {
        if( ((mask>>i)&1))        //mask & (1ll<<i)     equivalent
        { ss+=v[i];
        ans |= (1<<i);
        }
    }
    if(ss>sumb && ss<= sum)
    {
        sumb=ss;
       best=ans;
    }
}

for(int i=0;i<n;i++)
{
    if((best &(1<<i)^0))             // a!=b   == a^b
        cout<<v[i]<<" ";
}

cout<<"sum:"<<sumb<<endl;
}
return 0;
}
