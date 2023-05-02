#include <iostream>
#include <vector>
#include <string>
// #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
    ll a,b,c,k;
    cin >> a >> b >> c >> k;
    if(k % 2 == 0)  cout << a - b << "\n";
    else cout << b - a << "\n"; 
    return 0;
}