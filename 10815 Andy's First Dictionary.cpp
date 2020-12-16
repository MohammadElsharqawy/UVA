#include <bits/stdc++.h>
using namespace std;

bool ispossible(char c)
{
    return  c >='a' && c <='z' ;
}

set<string>ss;
int main()
{

    string m;
    while(cin>>m)
    {
       string mm ="";
        for(int i=0;i<m.size();i++)
        {
            m[i]=tolower(m[i]);
            if(ispossible(m[i]))
            {
                mm += m[i];
            }else if(mm != "")
            {
                ss.insert(mm);
                mm="";
            }
        }

        if(mm.size()!=0)
        {
            ss.insert(mm);
        }

    }


for(auto it : ss)
{
    cout<<it<<endl;
}
    return 0;
}





