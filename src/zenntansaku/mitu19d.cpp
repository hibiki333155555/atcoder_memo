// <模範解答>
// 3桁を指定するのはO(N3)かかってしまう。
// だが、答えの組み合わせに注目してみると、10 ** 3通りある。
// これなら全探索できるので、10 ** 3通りで作れるかどうか試してみる。
// 全ての文字について、次にある文字が出てくる最近の添字を覚えておく。
// すると、先頭から3つの数を貪欲に探していくのをO(1)できる。

// -> 三桁の暗証番号を決め打ちして、それが可能かどうか判定する　* (10 ** 3)

// どこを消すかなんてどうでもいい

#include <iostream>
#include <vector>
#include <string>
// #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define INT_MAX 2147483647


string S; int N, cnt;
 
int main() {
	cin >> N >> S;
	for (int i = 0; i < 1000; i++) {
		int c[3] = {i / 100, (i / 10) % 10, i % 10};
		int f = 0;
		for (int j = 0; j < N; j++) {
            // c[f]はint型なので '0' にたしてあげるといい感じに文字がずれる。こうすると暗証番号の分割が楽　The 貪欲法!
			if (S[j] == ('0' + c[f])) f++;
			if (f == 3) break;
		}
		if (f == 3) cnt++;
	}
	cout << cnt << endl;
	return 0;
}