#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n  , typ , val;
    while(scanf("%d" ,&n) !=EOF){
        bool isST = 1 , isQ = 1 , isPQ = 1;
        stack < int > st ;
        queue < int > q;
        priority_queue < int > pq;
        while(n--){
            scanf("%d %d" ,&typ , &val);
            if(typ == 1){
                if(isST)
                st.push(val);
                if(isQ)
                q.push(val);
                if(isPQ)
                pq.push(val);
            }
            else{
                if(st.empty() || st.top()!=val){
                    isST = 0;
                }
                else{
                    st.pop();
                }
                if(q.empty() || q.front()!=val){
                    isQ = 0;
                }
                else{
                    q.pop();
                }
                if(pq.empty() || pq.top()!=val){
                    isPQ = 0;
                }
                else{
                    pq.pop();
                }
            }
        }
        if(isST && !isPQ && !isQ){
            puts("stack");
        }
        else if(isQ && !isPQ && !isST){
            puts("queue");
        }
        else if(isPQ && !isQ && !isST){
            puts("priority queue");
        }
        else if(!isPQ && !isQ && !isST){
            puts("impossible");
        }
        else{
            puts("not sure");
        }
    }
    return 0;
}
