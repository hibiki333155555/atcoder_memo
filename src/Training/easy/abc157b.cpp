// ビンゴ　○
#include <iostream>
#include <vector>
#include <string>
// #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
    int A[3][3]; rep(i,0,3)rep(j,0,3) cin >> A[i][j];
    int ans[3][3] = {0};

    int n; cin >> n;
    
    int b;
    rep(i,0,n) {
        cin >> b;
        rep(i,0,3)rep(j,0,3) if(b == A[i][j]) ans[i][j]++;
    }

    bool flag = false;
    rep(i,0,3) if((ans[i][0] && ans[i][1] && ans[i][2]) || (ans[0][i] && ans[1][i] && ans[2][i])) flag =true;
    if((ans[0][0] && ans[1][1] && ans[2][2]) || (ans[0][2] && ans[1][1] && ans[2][0])) flag = true;

    if(flag) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    return 0;
}