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
    string O, E; cin >> O >> E;
    string ans = "";
    
    rep(i, 0, O.length()) {
        ans += O[i];
        if(E[i])ans += E[i];
    }
    cout << ans << endl;
    return 0;
}