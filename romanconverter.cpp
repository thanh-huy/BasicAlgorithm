/*
input: decimal numberals
output: roman number
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dec[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string roman[] = {"M","CM","D", "CD", "C", "XC","L","XL","X","IX","V","IV","I"};
    int n=949;
    int i=0;
    while(n)
    {
        while(n/dec[i])
        {
            cout << roman[i];
            n -= dec[i];
        }
        ++i;
    }
    return 0;
}

