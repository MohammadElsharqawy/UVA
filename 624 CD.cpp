#include<bits/stdc++.h>

using namespace std;
int sum,n;
vector<int>taken,besttaken ;
vector<int> v;
int i;int sumsof,best=0;
void solve()
{
   if(i==n)
   {
       if(sumsof > best)
       {
           best=sumsof;
           besttaken=taken;

       }

       return ;
   }

    if(sumsof+v[i] <= sum )
    {
        sumsof += v[i];
        taken.push_back(v[i]);
        i++;
        solve();
        i--;
        sumsof -= v[i];
        taken.pop_back();


    }

   i++;
    solve();
    i--;

}



int main()
{

while(cin>>sum>>n)
{ v.resize(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    i=0,sumsof=0,best=0;
    solve();
    for(int k : besttaken)
    {
        cout<<k<<" ";
    }


cout<<"sum:"<<best<<endl;
}



    return 0;
}
