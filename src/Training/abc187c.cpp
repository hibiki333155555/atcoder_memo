#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main() {
    int n; cin >> n;
    vector<string> S(n);
    for(string& s : S) cin >> s;
    unordered_set<string> h(S.begin(), S.end());
    for(string& s : S) if(h.count('!' + s)) {
        cout << s << "\n";
        return 0;
    }
    
    cout << "satisfiable" << "\n";
    return 0;
}