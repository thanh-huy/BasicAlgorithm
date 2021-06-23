#include "bits/stdc++.h"
using namespace std;
typedef pair<int,int> pii;
ifstream fi("ENERGY.INP");
ofstream fo("ENERGY.OUT");
int main(){
    int n, k, x,y;
    fi >> n;
    int64_t ans = 0;
    priority_queue<int64_t> a, p;
    for(int i=0; i<2*n; ++i){
        fi >> x >> y;

        if(x>y){
             a.push(x-y);
        }else{
             p.push(y-x);
        }
    }

    //
    x = a.size();
    k = (n>x)?x:n;
    for(int i=0; i<k; ++i){
        x = a.top();
        ans+=x;
        a.pop();
    }
    x = p.size();
    k = (n>x)?x:n;
    for(int i=0; i<k; ++i){
        x = p.top();
        ans+=x;
        p.pop();
    }
    fo << ans;
    fo << "\n Time:" << clock()/(double )1000 << " sec";
}
