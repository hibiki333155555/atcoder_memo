#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
// #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep0(i,N) for(int i=0;i<N;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)


int main() {
    int n;
    cin >> n;
    vector<int> d;
    rep(i, 0, n) {
        int x; cin >> x;
        d.push_back(x);
    }

    // int d[n] -> sort(d, d+n); 
    sort(d.begin(), d.end());

    cout << d[n/2] - d[n/2 - 1] << "\n"; 
    
    return 0;
}