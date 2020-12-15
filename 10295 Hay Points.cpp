#include <bits/stdc++.h>
using namespace std;


map<string ,int > vsi;
int main()
{

    int t,n;cin>>t>>n;

  for(int i=0;i<t;i++)
  {  string m;int a;cin>>m>>a;
      vsi.insert({m,a});
  }

while(n--)
{  string n; int to=0;
    while(cin>>n && n!=".")
    {    if(vsi.count(n)!=0)
         to+=vsi[n];
       else
            continue;

    }
cout<<to<<endl;

}


    return 0;
}
