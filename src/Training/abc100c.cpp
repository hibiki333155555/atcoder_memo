// <問題>　https://atcoder.jp/contests/abc100/tasks/abc100_c
// Nこの要素が与えられる。　各要素を /2 か *3 するという操作を最大で何回できるかを計算する
// 全ての要素を３倍することはできない

// <方針>
// 1. ３倍する操作は無限にできるが２で割る操作には回数に制限がある
// 2. ある整数を３倍しても２で割れる回数は変わらない
// 3. 各要素について２で割れる回数を計算し合計して出力する。

// <解答>
#include <iostream>
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
