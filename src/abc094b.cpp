#include <iostream>
// #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
    int N, M, X;
    cin >> N >> M >> X;

    int A[M];
    rep(i, 0, M) cin >> A[i];

    int left = 0;
    int right = 0;

    rep(i, 0, M) {
        if(A[i] < X) left++;
        else right++;
    }

    cout << min(left, right) << endl;

    return 0;
}