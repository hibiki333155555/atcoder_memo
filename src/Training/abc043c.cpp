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

    int A[n];
    rep(i, 0, n) cin >> A[i];
    sort(A, A + n);

    int ans = 1000000000;
    // ll ans = 1LL<<60;
    for(int i = A[0]; i <= A[n - 1]; i++) {
        int c = 0;
        for(int j = 0; j < n; j++) c += (A[j] - i) * (A[j] - i);
        ans = min(ans, c);
    }



    cout << ans << "\n";
    return 0;
}