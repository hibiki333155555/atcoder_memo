#include <iostream>
#include <vector>
#include <string>
// #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep0(i,N) for(int i=0;i<N;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)


int main() {
    int n; cin >> n;
    ll A[n];
    int cnt[202];
    rep(i, 0, n) cin >> A[i];

    ll ans = 0;
    rep(i, 0, n) {
        int po = A[i] % 200;
        ans += cnt[po];
        cnt[po]++;
    }

    cout << ans << "\n";
    return 0;
}
