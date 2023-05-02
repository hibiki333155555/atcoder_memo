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
/*
int main() {
    string s, t;
    cin >> s >> t;
    string u = "";
    string v = "";
    rep(i,0,2) {
        u += s[i];
        v += t[i];
    }

    int n = s.length();
    int m = t.length();

    int count[26] = {0};
    int countb[26] = {0};
    
    rep(i, 2, n) {
        if(!((s[i - 2] == s[i - 1]) && (s[i - 1] == s[i]))) u += s[i];
        else count[s[i] - 'a']++;
    }

    rep(i, 2, m) {
        if(!((t[i - 2] == t[i - 1]) && (t[i - 1] == t[i]))) v += t[i];
        else countb[t[i] - 'a']++;
    }

    rep(i,0,26) {
        if(count[i] > countb[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    if(u == v) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
*/