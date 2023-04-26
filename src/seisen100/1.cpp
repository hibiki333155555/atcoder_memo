#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)


int main() {
    int n; cin >> n;

    ll A[n], B[n];
    rep(i, 0, n) {
        cin >> A[i] >> B[i];
    }

    sort(A, A+n); sort(B, B+n);

    ll ans = 0;
    rep(i, 0 , n) {
        ans += abs(A[n/2] - A[i]) + abs(A[i] - B[i]) + abs(B[n/2] - B[i]);
    }


    cout << ans << "\n";
    return 0;
}