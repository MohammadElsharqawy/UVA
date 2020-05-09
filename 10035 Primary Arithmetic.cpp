#include <bits/stdc++.h>
using namespace std;

int main(){
int m,n;
while(cin>>m>>n){

        if(m==0&&n==0)break;

int t,c=0,cnt=0;

    while(m || n )
    { int a=m%10;
        int b=n%10;
       m/=10;n/=10;
        t=a+b+c;

        if(t>9)
        {
            c=t/10;
            cnt++;
        }
        else
            c=0;}

if(cnt==0){cout<<"No carry operation."<<"\n";}
else if(cnt==1){cout<<cnt<<" carry operation."<<"\n";}
    else
    cout<<cnt<<" carry operations."<<"\n";}

return 0;
}
