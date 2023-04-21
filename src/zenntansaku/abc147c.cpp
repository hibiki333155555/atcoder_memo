#include <iostream>
#include <vector>
#include <string>
// #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)

int main() {
    int N;
    cin >> N;

    vector<int> x[N], y[N];
    int A[N];
    rep(a, 0, N) {
        cin >> A[a];
        rep(i, 0, A[a]) {
            int X, Y; cin >> X >> Y; X--;
            x[a].push_back(X); y[a].push_back(Y);
        }
    }

    int ans = 0;
    // 正直者の組み合わせを全探索
    for(int bit = 0; bit < (1 << N); bit++) {
        int cnt = 0;
        bool flag;
        // 各証言者ごとに証言を確認
        for(int i = 0; i < N; i++) {
            flag = true;
            // 証言者が正直者の仮定をされている時だけ発言を拾う
            if(1 << i & bit) {
                // 各証言ごとに真実かどうか確認
                for(int j = 0; j < A[i]; j++) {
                    if(((1 << x[i][j]) & bit) != y[i][j]) flag = false;
                }
                if(flag) cnt++;
            } 
            if(flag == false) break;
        }
        if(flag == false) continue;
        ans = max(ans, cnt);
    }

    cout << ans << endl;
    return 0;
}