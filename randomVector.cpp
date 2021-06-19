#include<bits/stdc++.h>
using namespace std;
void showVector(vector<int> v){
    for(auto i: v)
        cout << i << " ";
    cout << endl;
}

//ham xao tron ngau nhien tu xay dung
int myrandom(int i){
    return rand()%i;
}
int main(){
    vector<int> myvector;
    //input
    for(int i=1; i<=10; ++i)
        myvector.push_back(i);
    //view
    showVector(myvector);
    //su dung xao tron mac dinh
    random_shuffle(myvector.begin(), myvector.end());
    //view
    cout << "\n Vector sau khi xao tron:";
    showVector(myvector);
    //xao tron theo ham myrandom
    srand(time(0));
    random_shuffle(myvector.begin(), myvector.end(), myrandom);
    cout << "\n Vector su dung ham xao tron ngau nhien:";
    showVector(myvector);

    return 0;
}
