//counting sort tren mang nho
#include <iostream>
#include "bits/stdc++.h"
#define MAX_N 20
using  namespace std;
int n = 10;
void countSort(){
    //init data
    cin.sync_with_stdio(0);
    cin.tie();
    int arr[n];
    int res[MAX_N];
    for(int i=0; i<n; ++i){
        arr[i] = rand()%20+1;
    }
    for(int i=0; i< n; ++ i){
        res[i] = 0;
    }
    for(int i=0; i<n; ++i)
        res[arr[i]]++;
    //arr
    for(int i=0; i<n;++i)
        cout << arr[i]<< " ";
    cout << "\n Sort:";
    for(int i=0; i<MAX_N; ++i)
        cout << res[i] << " ";
}
int main() {
    countSort();
    return 0;
}
