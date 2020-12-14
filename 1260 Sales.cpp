#include <iostream>
#include<complex>
#include <cstdlib>
#include <vector>
#include <queue>
#include <numeric>
#include <iomanip>
using namespace std;


int main(){



const int N=1005;
int arr[N];
int t;cin>>t;
while(t--)
{
    int cnt=0;
  int n;cin>>n;
  for(int i=0;i<n;i++)
      cin>>arr[i];

  for(int i=1;i<n;i++)
  {
      for(int j=i-1;j>=0;j--)
      {  if(arr[j] <= arr[i])
               cnt++;
      }

  }
cout<<cnt<<endl;

}



    return 0;
}
