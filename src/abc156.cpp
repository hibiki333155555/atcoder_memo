#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const int inf = 10000000000;

int main() {
    int N;
    cin >> N;
    int A[N];

    for(int i = 0; i < N; i++) cin >> A[i];

    int ans = inf;
    int all;

    for(int i = 1; i < 101; i++) {
        all = 0;
        for(int j = 0; j < N; j++) all += (A[j] - i) * (A[j] - i);
        ans = min(ans, all);
    }

    cout <<  ans << endl;
    return 0;
}