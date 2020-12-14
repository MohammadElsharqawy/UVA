#include<bits/stdc++.h>
using namespace std;

bitset<20> row,ld,rd;
int a,b,cnt=0;

int col [9];
void backtrack(int c) {
if(c==9)
{
    cnt++;
    cout<<setw(2)<<cnt<<"      ";
for(int i=1;i<=8;i++)
{
    cout<<col[i]<<" \n"[i==8];
}

return ;
}




    if (c == b) backtrack(c + 1);
    else {
        for (int r = 1; r <= 8; r++) {
            if (row[r] || ld[r + c] || rd[r - c + 8]) continue;

            col[c]=r;
           row[r] = ld[r + c] = rd[r - c + 8] = 1;
            backtrack(c + 1);
            
           row[r] = ld[r + c] = rd[r - c + 8] = 0;

        }
    }
}


int main()
{

int t;cin>>t;
while(t--)
{
row.reset();
rd.reset();
ld.reset();
memset(col,0,sizeof row);

    cin>>a>>b;
    cout<<"SOLN       COLUMN\n";
    cout<<" #      1 2 3 4 5 6 7 8\n\n";
cnt=0;
    row[a] = ld[a+b] = rd[a-b+8]=1;
  col[b]=a;
  backtrack(1);
  
   if(t) cout<<endl;
}




    return 0;
}
