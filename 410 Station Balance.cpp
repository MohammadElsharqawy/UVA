#include <bits/stdc++.h>
using namespace std;


vector<int>v;
vector<int >vii[10000];
int main()
{

int n,m;int tt=1;
while(cin>>n>>m)
{
v.clear();
v.resize(2*n);
for(int i=0;i<n;i++)
{
    vii[i].clear();
}
long long tot=0;
for(int i=0;i<m;i++)
{ cin>>v[i];
tot += v[i];
}

for(int i=m;i<2*n;i++)
{
    v[i]=0;
}
cout<<"Set #"<<tt++<<endl;
    double avg = 1.0 * tot / n;
sort(v.begin(),v.end());
double imp=0;
for(int i=0;i<n;i++)  // goto the half size of the vector only.
{     if(v[i])
    vii[i].push_back(v[i]);
if(v[v.size()-i-1])
    vii[i].push_back(v[v.size()-i-1]);
    imp += abs(((v[i] + v[ v.size() - 1 - i]) - (avg)));
}

for(int i=0;i<n;i++)
{
    cout<<setw(2)<<i<<":";
for(int j=0;j<vii[i].size();j++)
{
    cout<<" "<<vii[i][j];
}
cout<<endl;
}
cout<<"IMBALANCE = "<<fixed<<setprecision(5)<<imp<<endl<<endl;
}




    return 0;
}
