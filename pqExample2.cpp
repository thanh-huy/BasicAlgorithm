#include <bits/stdc++.h>
using namespace std;

void print_queue(priority_queue<pair<int,int>> q){
    while( !q.empty() ){
        auto e = q.top() ;
        cout << e.first << "-" << e.second << "; ";
        q.pop();
    }
    cout<<endl;
}

int main(){

    priority_queue<pair<int,int>> q;
    q.emplace(4,5);
    q.emplace(4,6);
    q.push({1,3});
    q.push(make_pair(2,3));

    print_queue( q );
    return 0;
}
