#include <iostream>
using namespace std;
typedef long long int ll;

//　桁数を調べる
int cnt_digits(ll N){
    int digits=0;

    while(N > 0){
        N /= 10;
        digits++;
    }

    return digits;
}


int main() {
    ll N;
    cin >> N;

    int ans = cnt_digits(N);

    // 探索数を減らす
    for(ll A = 1LL; A * A <= N; A++) {
        if(N % A != 0) continue;;
        const ll B = N / A;
        ans = min(ans, max(cnt_digits(A), cnt_digits(B)));
    }

    cout << ans << endl;
    return 0;
}