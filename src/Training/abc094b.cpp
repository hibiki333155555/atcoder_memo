// <問題>　
// 一列に並んだN個のマスを移動する。
// 地点xからスタートで地点0かNに到着すればゴール
// Mこの地点A[0]~A[M]には中継地点としてコストが+1される。
// 最小コストでゴールする時のコストを出力せよ。

// <方針>
// 進んだ道を戻ってもコストは減らないので移動ルートは地点xから右に行くか、左に行くかの二択になる。
// 右のコストと左のコストをforで計算して、小さい方を選ぶ
// A[i] は場所なので　(A[i] < X) で簡単に条件分岐できる。


// <解答>
#include <iostream>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
    int N, M, X;
    cin >> N >> M >> X;

    int A[M];
    rep(i, 0, M) cin >> A[i];

    int left = 0;
    int right = 0;

    rep(i, 0, M) {
        if(A[i] < X) left++;
        else right++;
    }

    cout << min(left, right) << endl;

    return 0;
}