#include <iostream>
#include <vector>
#include <string>
// #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep0(i,N) for(int i=0;i<N;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)


int main() {
    string s;
    cin >> s;
    int n = s.length();


    rep(i, 0, n) {
        if(s[i] > '0' && s[i] <= '9') {
            if(s[i + 1] >= '0' && s[i + 1] <= '9') {
                cout << s[i] << s[i + 1] << "\n";
                return 0;
            }
            else {
                cout << s[i] << "\n";
                return 0;
            }
        }
    }
}