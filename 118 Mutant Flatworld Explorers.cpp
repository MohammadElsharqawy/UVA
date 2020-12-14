#include<bits/stdc++.h>
using namespace std;



map<pair<int,int>,int> mp;
int main()
{

    int x,y,px,py;char curp;
cin>>x>>y;
while(cin>>px>>py>>curp)
{
   string s;
   cin>>s;
   bool fd=1;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='R')
       {
           if(curp=='N') curp='E';
           else if(curp=='E')curp='S';
           else if(curp=='S')curp='W';
           else
               curp ='N';
       } else if(s[i]=='L')
       {
           if(curp=='N') curp='W';
           else if(curp=='W')curp='S';
           else if(curp=='S')curp='E';
           else
               curp='N';
       }else
       {
           if(curp =='N')
           {
               py++;
               if(py>y)
               { py--;
                   if(mp[{px,py}]!=8)
                   {mp[{px,py}]=8;
                   fd=0;
                   break;
                   }
               }

           }else if(curp =='E')
           {
               px++;
               if(px>x)
               { px--;
                   if(mp[{px,py}]!=8)
                   {mp[{px,py}]=8;
                       fd=0;
                       break;
                   }
               }
           }else if(curp =='S')
           {
               py--;
               if(py<0)
               {
                   py++;
                   if(mp[{px,py}]!=8)
                   {mp[{px,py}]=8;
                       fd=0;
                       break;
                   }
               }


           } else if(curp =='W')
           {
               px--;
               if(px<0)
               { px++;
                   if(mp[{px,py}]!=8)
                   {mp[{px,py}]=8;
                       fd=0;
                       break;
                   }
               }

           }

       }
   }
   cout<<px<<" "<<py<<" "<<curp;
   if(fd==0)cout<<" LOST"<<endl;
   else
       cout<<endl;

}


    return 0;
}






