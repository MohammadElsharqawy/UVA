#include<bits/stdc++.h>
using namespace std;
vector<int>v,ans;
int n;
bitset<30>frq;
void backtrack (int j)
{
    if(ans.size()==6)
    {
      //  for(auto v : ans)
        //    cout<<v<<" ";
for(int i=0;i<6;i++)
     cout<<ans[i]<<" \n"[i==5];

     return ;
    }

    for(int i=j;i<n;i++)
    {


        ans.push_back(v[i]);
        backtrack(i+1);
        ans.pop_back();


    }



}
int main()
{



int t=1;
while(cin>>n ,n)
{   v.resize(n);

    frq.reset();
if(t==1)
{
   
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }


    backtrack(0);
t++;
} else
{

cout<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }


    backtrack(0);
    
}

}


    return 0;
}
