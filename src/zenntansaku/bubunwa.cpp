// N個の正の整数と整数Wが与えられる
// N個の整数から部分和Wを作れるか判定

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    // bit 全探索
    
    // (1 << N) は二進数 2のN乗を意味する (1<<0　から)　bit は十進数
    // つまり2のN乗回ループする文でbitが組み合わせを表す十進数になる
    for (int bit = 0; bit < (1 << N); ++bit) {
        int sum = 0;
        for (int i = 0; i < N; ++i) {
            // 0からN-1番目のうちi番目がtrueか否か判定する
            if (bit & (1 << i)) sum += a[i];
        }

        if (sum == W) {
            cout << "Yes" << "\n";
            return 0;
        }
    }

    cout << "No" << "\n";

    return 0;
}