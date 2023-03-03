#include <iostream>
// #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define out(ans) cout << ans << endl

int main() {
    int N;
    cin >> N;
    ll A[N];
    rep(i, 0, N) cin >> A[i];

    int ans = 0;

    rep(i, 0, N) {
        while(A[i] % 2 == 0) {
            A[i] /= 2;
            ans++;
        }
    }
    
    out(ans);
    return 0;
}

//　3倍しても2で割り切れる回数は変わらない。
//　各要素について2で割れる回数を合計すればいい。