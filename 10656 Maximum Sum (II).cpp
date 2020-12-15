#include <bits/stdc++.h>

using namespace std;


vector<int>v;
int main()
{
    int t;
    while(cin>> t ,t) {
       v.clear();
        for (int i = 0; i < t; i++) {
            int n;
            cin >> n;
            if (n != 0)
                v.push_back(n);
        }
        if(v.size()==0)
        {
            cout<<0<<endl;
        }else {
            for (int i = 0; i < v.size(); i++) {
                cout << v[i] << " \n"[i == v.size() - 1];
            }
        }

    }






    return 0;
}
