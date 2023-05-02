#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
// #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)

ll gcd(ll a, ll b){
    if(a%b == 0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}

ll lcm(ll c, ll d) {
    return c / gcd(c, d) * d;
}

int main() {
    ll A, B, C, D;
    cin >> A >> B >> C >> D;
    ll u = B - A + 1;
    ll l, m, lm;
    l = B/C - (A-1)/C;
    m = B/D - (A-1)/D;
    lm = B/lcm(l, m) - (A-1)/lcm(l, m);

    ll ans;
    ans = u - (l + m - lm);

    cout << ans << endl;
    return 0;
}