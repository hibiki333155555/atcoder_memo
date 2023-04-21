#include <iostream>
#include <string>
using namespace std;
string T = "ATCG";

// 入力された文字列の部分文字列のうちACTGだけを含むもので最長の文字列の長さを求める。
// 入力サイズが小さいので全ての場合について探索できる
// ある部分文字列がAGCTだけを含む文字列か判定するにはstring の find method を使う
int main() {
    string S;
    cin >> S;
    int N; N = S.length();

    int ans = 0;

    for(int l = 0; l < N; l++) {
        for(int r = l; r < N; r++) {
            bool flag = true;
            // str.find(x) でstrにxが含まれていたらxがあるstrの添字番号の先頭を返す
            // xが含まれていない場合nposを返す
            for(int x = l; x <= r; x++) if(T.find(S[x]) == string::npos) flag = false;
            if(flag) ans = max(ans, r - l + 1);
        }
    }

    cout << ans << "\n";
    return 0;
}
