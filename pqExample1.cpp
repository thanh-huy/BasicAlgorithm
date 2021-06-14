#include <bits/stdc++.h>
using namespace std;

void print_queue(priority_queue<int> q)
{
    while( !q.empty() ){
        cout << q.top() << " ";
        q.pop();
    }
    cout<<endl;
}

int main(){

    priority_queue<int> q;
    q.push(4);
    q.push(1);
    q.push(5);
    q.push(-3);
    print_queue( q );
    return 0;
}
