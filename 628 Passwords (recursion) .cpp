
#include <bits/stdc++.h>
using namespace std;
string pattern;
string arr[1000];
int n;

void print (int i,string m="")
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

            print(i+1,m+arr[j]);

        }
}else
    {
        for(char c='0';c<='9';c++)
        {

            print(i+1, m + c);
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

            print(0);

        }



    }


    return 0;
}
