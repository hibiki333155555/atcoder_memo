// 問題状況の把握 -> スイッチのon off を固定した時の探索を実装
// あるスイッチが on か off かは　(1 << スイッチ番号)　& bit で判定
// ただしスイッチ番号が 0 オリジンの　1ずつ増加する正の整数でなくてはならない

#include <iostream>
#include <vector>
#include <string>
// #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define INT_MAX 2147483647


int main() {
	// 入力
	// N スイッチの個数　M 電球の個数
    int N, M;
	cin >> N >> M;

	// K 各電球が接続しているスイッチ番号
	// スイッチには1からNの番号がついている
	vector<int> K[M];
	rep(i, 0, M) {
		int k; cin >> k;
		rep(j, 0, k) {
			int s; cin >> s; s--;
			K[i].push_back(s);
		}
	}

	// P 電球の点灯条件
	int P[M];
	rep(i, 0, M) cin >> P[i];

	// ビット全探索　電球 N個のon off　全通りを探索
	// for(auto& s : K[M]) K[M]の各要素を取り出す
	// 1 << s　& bit で s がonかoffか取り出せる。　bitの桁ずらしは0オリジンなので　入力で s-- しておく
	int ans = 0;
	for(int bit = 0; bit < (1 << N); bit++) {
		bool flag = true;
		rep(j, 0, M) {
			int cnt = 0;
			for(auto& s: K[j]) if((1 << s) & bit) cnt++;
			if(cnt % 2 != P[j]) flag = false;
		}
		if(flag) ans++;
	}

	cout << ans << endl;
	return 0;

}