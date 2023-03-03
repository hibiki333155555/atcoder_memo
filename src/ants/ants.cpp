// 長さLcmの竿の上をN引きのアリが毎秒１cmのスピードで歩く。竿の端に到達すると蟻は落ちる
// 二匹の蟻が出会うとそれぞれ反対を向いて戻っていく
// 各ありについて現在の竿の左端からの距離xiはわかるがどの向きを向いているかはわからない
// 全ての蟻が竿から落ちるまでにかかる最小の時間と最大の時間をそれぞれ求めなさい

// 入力
// L N
// X1 X2 ... XN

// 衝突がこの問題を複雑にしている。 衝突にある本質を見つける。 ->　スモールケースで考える
// 二匹の衝突について考察すると、蟻の区別をなくせば、そのまますれ違っているのと変わらないことに気づく
// 蟻が独立に動く。　全ての蟻について竿から落ちるまでの最小の距離、最大の距離を求めればいいだけになる。

#include <iostream>
using namespace std;
#define rep(i,N) for(int i=0;i<N;i++)

int main() {

    int L, N;
    cin >> L >> N;
    int X[N];
    rep(i, N) cin >> X[i];

    // 最小の時間
    int mint = 0;
    rep(i, N) mint = max(mint, min(X[i], L - X[i]));

    // 最大の時間
    int maxt = 0;
    rep(i, N) maxt = max(maxt, max(X[i], L - X[i]));

    cout << mint << endl << maxt << endl;
    return 0;

}