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
    int m; cin >> m;
    int A[m], B[m]; rep(i, 0, m) cin >> A[i] >> B[i];

    int n; cin >> n;
    int C[n], D[n]; rep(i, 0, n) cin >> C[i] >> D[i];

    rep(i, 0, n) {
        int dx, dy; dx = C[i] - A[0]; dy = D[i] - B[0];
        
        rep(j, 0, m) {
            bool flag = false;
            rep(k, 0, n) if(A[j] + dx == C[k] && B[j] + dy == D[k]) flag = true;
            if(!flag) break;
            if(j == m - 1) {
                cout << dx << " " << dy << endl;
                return 0;
            }
        }
    }

    return 0;
}