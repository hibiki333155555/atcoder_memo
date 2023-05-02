//　復習　☆

#include <iostream>
#include <string>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)


int N;
int C[50][26];
int main() {
    cin >> N;
    rep(i, 0, N) {
        string s; cin >> s;
        for (char c : s) C[i][c - 'a']++;
    }

    string ans = "";
    rep(i, 0, 26) {
        int mi = 101010;
        rep(j, 0, N) mi = min(C[j][i], mi);

        char c = 'a' + i;
        rep(j, 0, mi) ans += c;
    }
    cout << ans << endl;
}