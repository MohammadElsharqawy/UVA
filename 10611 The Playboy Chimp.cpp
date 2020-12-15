#include <bits/stdc++.h>
using namespace std;

int arr[1000000];


int n;

int lower(int st,int en,int target) {
 int ans=INT_MAX;
    while (st<=en) {

        int mid = st +(en-st)/2;
        if (arr[mid] >= target)
            en=mid-1;

        else if(arr[mid] < target)
        {
         st=mid+1;
         ans=arr[mid];
        }

    }
   return ans;
}




int upper(int st,int en,int target) {
     int ans=-1;
    while (st<=en) {

        int mid = st +(en-st+1)/2;
        if (arr[mid] > target)
        {en=mid-1;
        ans=arr[mid];
        }

       else if(arr[mid] <= target)
        {
            st=mid+1;
        }

    }
    return ans;

}




int main() {


while(cin>>n) {
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int q;
    cin >> q;
    while (q--) {

        int tt;
        cin >> tt;
        int u=lower(0, n - 1, tt);
        if (u==INT_MAX)
            cout<<"X ";
        else
            cout<<u<<" ";
        int l=upper(0,n-1,tt);
        if(! (l+1))
            cout<<"X\n";
        else
            cout<<l<<endl;


    }

} return 0;
}
