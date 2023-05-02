#include <iostream>
#include <vector>
#include <string>
// #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
    int n;
    cin >> n;
    int A[n];
    rep(i, 0, n) cin >> A[i];
    int next; next = A[0];
    int ans = 0;

    while(true) {
        if(next == 2) {
            cout << ans + 1 << endl;
            return 0;
        }
        next = A[next - 1];
        ans++;
        
        if(ans > 100001) {
            cout << -1 << endl;
            return 0;
        }
    }
}