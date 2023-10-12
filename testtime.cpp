//
// Created by huynt on 12/10/2023.
//
#include "bits/stdc++.h"
using namespace std::chrono;
using namespace std;
#define Nmax 1e7;
ofstream fo("jetty.out");
ifstream fi("jetty.in");
vector<int> a(1'00,0);
vector<int>b(1'000'000,0);
void countingSort(){
    for(int i=0; i< 100; ++i){
        b[a[i]]++;
    }
}
void init(){
    auto f =[]()->int{return rand()%1000;};
    auto c = [](int i, int j)->bool {return (i>j);};
    generate(a.begin(),a.end(),f);
    auto  start = high_resolution_clock::now();
   // std::sort(a.begin(), a.end(),c);
   countingSort();
    for(int i=b.size(); i>0; --i)
    {
      if(b[i]>0)
          for(int j=0; j<b[i]; ++j)
            fo << i << endl;
    }
    auto  stop = high_resolution_clock::now();
    auto t= duration_cast<milliseconds>(stop-start);
    cout << "Time:" << t.count() <<endl;
}
int main(){

    init();

    return 0;
}