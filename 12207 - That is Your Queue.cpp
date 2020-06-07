#include <bits/stdc++.h>

using namespace std;


int main()
{
int p,c;int i=0;
while(cin>>p>>c && (p|c))
{  deque <long long>q; cout<<"Case "<<++i<<":"<<endl;
  for( int i = 1 ; i <=min(p,c) ; i++ )
     q.push_back(i);
int y=c;
    string m;
    while(y--) {
        cin >> m;
        if (m[0] == 'N') {

            long long t = q.front();
            q.pop_front();
            q.push_back(t);
            cout << t<< endl;
        } else {
            long long r;
            cin >> r;
            for (auto it = q.begin(); it != q.end(); it++) {
                if (*it == r) {
                    q.erase(it);
                    break;
                }
            }
            q.push_front(r);
        }
    }

}


return 0;
}


