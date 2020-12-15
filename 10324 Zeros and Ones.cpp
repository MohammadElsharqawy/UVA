#include<bits/stdc++.h>
using namespace std;






int main()
{
    string m;int i=1;
    while(cin>>m)
    {
        int q;cin>>q;
        cout<< "Case "<<i++<<":\n";
        while(q--)
        {
            int a , b; cin>>a>>b;
            if(a>b)swap(a,b);
            bool fd=1;
            char ch=m[a];
            for(int i=a+1;i<=b;i++)
            { if(m[i]!=ch)
                {
                fd=0;
                break;
                }

            }
            if(!fd)
            {
                cout<<"No\n";
            }else
                cout<<"Yes\n";


        }
    }
    return 0;
}
