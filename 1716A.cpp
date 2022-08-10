#include "bits/stdc++.h"
using namespace std;

int main(){
//    freopen("1716a.in","r", stdin);
//    freopen("1716a.out","w",stdout);
    int n;
    int64_t t;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> t;
        if(t==1) cout<<2<< endl;
        else if(t<=3 && t!=1) cout << 1 <<endl;
        else cout << (t+2)/3 << endl;
    }
}
