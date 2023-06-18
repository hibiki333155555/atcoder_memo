#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <set>
// #include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)


int main() {
    int n, k, q; cin >> n >> k >> q;
    ll a[n + 1];
    ll b[n + 1];
    for(int i = 0; i <= n; i++) a[i] = 0;
    int 
    
    for(int i = 0; i < q; i++) {
        int x; cin >> x; x--;
        ll y; cin >> y;
        a[x] = y;

    }

    return 0;
}