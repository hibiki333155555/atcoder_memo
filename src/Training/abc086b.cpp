#include <iostream>
#include <vector>
#include <string>
// #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
    string a, b;
    cin >> a >> b;
    int c; c = stoi(a + b);

    rep(i, 1, 100001) {
        if((i * i) == c) {
            cout << "Yes" << "\n";
            return 0;
        }
    }


    cout << "No" << "\n";
    return 0;
}