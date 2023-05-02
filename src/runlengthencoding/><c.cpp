#include <iostream>
#include <vector>
#include <string>
// #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)

vector<pair<char, int>> runLengthEncoding(string s) {
    int n = s.length();

    vector<pair<char, int>> res;
    char pre = s[0];
    int cnt = 1;
    rep(i,1,n) {
        if(pre != s[i]) {
            res.push_back({pre, cnt});
            pre = s[i];
            cnt = 1;
        }
        else cnt++;
    }

    res.push_back({pre, cnt});
    return res;
}

int plusOp(int x) {
    int ans = 0;
    while(x > 0) {
        ans += x;
        x -= 1;
    }
    return ans;
}

int main() {
    string s;
    cin >> s;
    auto v = runLengthEncoding(s);
    int ans = 0;
    int n; n = v.size();
    rep(i,0,n) {
        if(i == 0) ans += plusOp(v[i].second);
        else if((v[i].first == '>') && (v[i - 1].second < v[i].second)) {
            ans += plusOp(v[i].second);
            ans -= v[i - 1].second;
        }
        else if((v[i].first == '>') && (v[i - 1].second > v[i].second)) {
            ans += plusOp(v[i].second - 1);
        }
        else ans += plusOp(v[i].second);
    }
    cout << ans << endl;
    return 0;
}