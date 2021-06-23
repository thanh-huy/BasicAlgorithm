/*Athena XX -WB37*/
#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
typedef pair<int,int> pii;
ifstream fi("gen.inp");
ofstream fo("gen.out");

int main(){
    int n,m,t;
    fi >> n >> m;
    vector<pii> a(m+n);
    //input Oslo
    for(int i=0; i<n; ++i){
        fi >> t;
        a[i] = {t,0};
    }
    //input NewYork
    for(int i=n; i<n+m; ++i){
        fi >> t;
        a[i] = {t,1};
    }

    sort(a.begin(), a.end());
    a.push_back({-1,3}); // rao chan
    set<int> s[2], s_c;

    int p=0;

    while(p<n+m){
        //Tim cap khac nhau dua ve s[0] hoac s[1];
        if(a[p].ff!=a[p+1].ff){
            s[a[p].ss].insert(a[p].ff);
            ++p;
        }
        else{
            s_c.insert(a[p].ff);
            p+=2;
        }
    }
    //output
    fo << s_c.size() << endl;
    if(s_c.size()>0){
        for(auto i: s_c)
            fo << i <<' ';
        fo << endl;
    }
    fo << s[0].size() << endl;
    if(s[0].size()>0){
        for(auto i : s[0])
            fo << i <<' ';
        fo << endl;
    }
    fo << s[1].size() <<  endl;
    if(s[1].size()>0){
        for(auto i:s[1])
            fo << i <<' ';
        fo << endl;
    }
    fo << "\n Time:" << clock()/(double)1000<<" sec!";
}
