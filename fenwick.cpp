#include <bits/stdc++.h>
using namespace std;

const int maxn = 2e5 + 5;

int64_t fw[maxn];


void update(int index, int value){
   // if ( index < 0 ) value ;
    while( index < maxn){
        fw[index] += value;
        index += (index&-index);
        cout << index << " ";
    }
}


int64_t get(int index){
    int64_t result = 0;
    while(index > 0){
        result += fw[index];
        index -= (index&-index);
    }
    return result;
}
int64_t getSumSegment(int left, int right){
    return get(right) - get(left-1);
}


int main(){

    update(1,10);
    update(4,5);
    update(10,20);
    update(5,30);

    cout << "Tong cac phan tu tu 1 den 2 : " << get(2) << endl;
    cout << "Tong cac phan tu tu 1 den 4 : " << get(4) << endl;
    cout << "Tong cac phan tu tu 3 den 5 : " << getSumSegment(3,5) << endl;
    cout << " Mang : ";
    for(auto i=0; i < 10; ++i)
        cout << fw[i] << " ";
    cout << endl;
    return 0;
}
