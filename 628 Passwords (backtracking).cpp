
#include <bits/stdc++.h>
using namespace std;
string pattern;
string arr[1000];
int n;
int i;string m="";
void print ()
{
       if(i==pattern.size())
       {
           cout<<m<<endl;
           return;
       }


    if(pattern[i]=='#')
{
        for(int j=0;j<n;j++)
        {
           m+=arr[j];
           i++;
            print();
            i--;
            m.resize(m.size()-arr[j].size());

        }
}else
    {
        for(char c='0';c<='9';c++)
        {
            m+=c;
            i++;
            print();
            i--;
            m.pop_back();
        }


    }


}




int main()
{

    while(cin>>n)
    {

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"--\n";
        int q;
        cin>>q;
        while(q--)
        {
            cin>>pattern;
              i=0,m="";
            print();

        }



    }


    return 0;
}
