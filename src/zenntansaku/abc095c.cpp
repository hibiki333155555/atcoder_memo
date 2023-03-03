// <問題>
// A, B, AB タイプのピザが商品にある。　ABピザは A/2 + B/2
// AのピザX枚, BのピザY枚買う時の最小コストを出力せよ
// 入力のA B C　は各ピザ一枚のコストである
//　余るピザが出ても良い

// <方針>
// ABピザの枚数を固定すれば　AピザとBピザの購入枚数は決定される
// ABの枚数をfor文で回してminを更新する。

// <解答>
#include <iostream>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define lrep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define INT_MAX 2147483647

int main() {
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;
    int ans = INT_MAX;

    rep(ab, 0, 200020) {
        int sum = C * ab;

        int x = X - ab/2;
        int y = Y - ab/2;

        if(x > 0) sum += x * A;
        if(y > 0) sum += y * B;

        ans = min(ans, sum);
    }

    cout << ans << endl;
    return 0;
}