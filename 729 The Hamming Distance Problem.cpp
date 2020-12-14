#include<bits/stdc++.h>
using namespace std;

int l,o;

void print ( string append,int ones)
{
    if(append.size() == l)
    {

        if(ones==o)
        {
            cout<<append<<endl;
        }

        return ;

    }


    print(append + '0',ones);

    print( append + '1',ones+1);


}






int main()
{  int t;
   while(cin>>t)
   {
      while(t--) {
          cin >> l >> o;

          print("",0);

       if(t)  cout << "\n";
      }
   }




    return 0;
}
