// いろはちゃん
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
    int n, k;
    cin >> n >> k;
    int A[k];

    rep(i, 0, k)  cin >> A[i];

    

    rep(i, n, 100000) {
        bool flag = true;
        int d[5];
        int m = i;
        int t = 0;

        while(m > 0) {
            d[t] = m % 10;
            m /= 10;
            t++;
        }

        rep(j, 0, t) {
            rep(l, 0, k) {
                if(A[l] == d[j]) flag = false;
            }
        }

        if(flag) {
            cout << i << "\n";
            return 0;
        }
    }

    return 0;
}

/**
#include <bits/stdc++.h>
using namespace std;

set<int> D;
bool isValid(int n) {
    while (n) {
        if (D.count(n % 10)) return false;
        n /= 10;
    }
    return true;
}

int main() {
    int N, K; 
    cin >> N >> K;
    for (int i = 0; i < K; ++i) {
        int d; cin >> d; D.insert(d);
    }
    for (int n = N;; ++n) if (isValid(n)) {
        cout << n << endl;
        return 0;
    }
}
*/