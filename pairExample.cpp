#include<bits/stdc++.h>
using namespace std;

int main () {
 pair<string,double> p1;
 pair<string, int> p2("Hello",1);
 pair<string, int> p3(p2);
 p1 = make_pair("make_p", 0.25);

 p2.first = "pair2";
 p2.second = 99;

 cout << "p1.first:" << p1.first << "; p1.second:"
      << p1.second << endl; // make_p  0.25
 cout << "p2.first:" << p2.first << "; p2.second:"
      << p2.second << endl; // pair2   99
 cout << "p3.first:" << p3.first << "; p3.second:"
      << p3.second << endl; // Hello   1

  return 0;
}
