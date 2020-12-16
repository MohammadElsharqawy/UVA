#include<bits/stdc++.h>
using namespace std;
const int s= 1006;

char bg[s][s];
char sm[s][s];
char arr[s][s];



int main()
{
int N,n;
while (cin>>N>>n && (N||n) )
{

   for(int i=0;i<N;i++)
   {
       for(int j=0;j<N;j++)
       {
           cin>>bg[i][j];
       }
   }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>sm[i][j];
        }
    }

 int t=4;
    while(t--)
    {  int cnt=0;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                bool fd=1;
                for(int k=0;k<n;k++)
                {
                    for(int y=0;y<n;y++)
                    {
                        if(bg[i+k][j+y] != sm[k][y])
                        {
                            fd=0;break;
                        }

                    }

                }

                if(fd)
                    cnt++;

            }
        }
  if(!t)
        cout<<cnt;
  else
      cout<<cnt<<" ";

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr[i][j]=sm[n-1-j][i];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                sm[i][j]=arr[i][j];
            }
        }

    }
cout<<"\n";

}


}
