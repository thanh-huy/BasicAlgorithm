#include "bits/stdc++.h"
using namespace std;
int main(){
    int a[2][3] = {{2,3,4},{1,0,0}};
    int b[3][2] = {{0,1000},{1,100},{0,10}};
    int c[2][2];
    int n,m,p,q;
    n=2; m=3; p=3; q=2;
    //----

    cout << "A \n";
     for(int i=0; i<n;++i)
        for(int j=0; j<m; ++j)
            cout << a[i][j] << " \n"[j==m-1];
    //----
    cout << "B \n";
     for(int i=0; i<p;++i)
        for(int j=0; j<q; ++j)
            cout << b[i][j] << " \n"[j==q-1];
    //----
    for(int i=0; i<n; ++i)
    for(int j=0; j<q; ++j){
        c[i][j]=0;
        for(int k=0; k<m; ++k)
            c[i][j]= c[i][j]+ a[i][k]*b[k][j];
    }

    cout << "\n C \n";
    cout << n << " " << q <<endl;
    for(int i=0; i<n;++i)
        for(int j=0; j<q; ++j)
            cout << c[i][j] << " \n"[j==q-1];
    return 0;
}
