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
    int n, d, x;
    cin >> n >> d >> x;
    int A[n];
    rep(i, 0, n) cin >> A[i];
    int ans = x;

    // 問題文そのままに実装する
    for(int i = 0; i < n; i++) {
        int count = 1;
        while(count <= d) {
            ans++;
            count += A[i];
        }
    }

    cout << ans << "\n";
    return 0;
}