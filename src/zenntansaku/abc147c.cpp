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

    int x[N][20], y[N][20];
    int A[N];
    rep(a, 0, N) {
        cin >> A[a];
        rep(i, 0, A[a]) {
            cin >> x[a][i] >> y[a][i];
            x[a][i] -= 1;
        }
    }

    int ans = 0;
    // 正直者の組み合わせを全探索
    for(int bit = 0; bit < (1 << N); bit++) {
        int cnt = 0;
        bool flag = true;
        // 各証言者ごとに証言を確認
        for(int i = 0; i < N; i++) {
            // 証言者が正直者の仮定をされている時だけ発言を拾う
            if(!((1 << i) & bit)) continue;
            
            // 各証言ごとに真実かどうか確認
            for(int j = 0; j < A[i]; j++) {
                if(((1 << x[i][j]) & bit) != y[i][j]) flag = false;
            }
            cnt++;
        }
        if(flag)ans = max(ans, cnt);
    }

    cout << ans << endl;
    return 0;
}