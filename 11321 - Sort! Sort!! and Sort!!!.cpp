#include <bits/stdc++.h>
using namespace std;

int m;
bool sortb(int i,int j)
{
    if(i%m!=j%m)
    {
        return (i%m)<(j%m);
    }

    if(abs(i%2)!=abs(j%2))
    {
        return (abs(i%2) > abs(j%2));
    }
if(abs(i%2))
    return i>j;

    return i<j;

}

int main()
{  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int n;
while(cin>>n>>m , (n||m)){
vector<int>v(n);

for(int i=0;i<n;i++)
{cin>>v[i];}

sort(v.begin(),v.end(),sortb);
cout<<n<<" "<<m<<endl;
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<endl;
}

}
cout<<"0 0"<<endl;
return 0;
  }
