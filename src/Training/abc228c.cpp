#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
// #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep0(i,N) for(int i=0;i<N;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)


int main() {
    int n, k;
    cin >> n >> k;

    int P[n];

    rep(i, 0, n) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        P[i] = p1 + p2 + p3;
    }

    int C[n];
    rep(i, 0, n) C[i] = P[i];
    sort(C, C+n, greater<int>());
    rep(i, 0, n) {
        if(P[i] + 300 >= C[k - 1]) cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }

    return 0;
}