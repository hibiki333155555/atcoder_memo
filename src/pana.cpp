#include <iostream>
using namespace std;


int main() {
    long long int N, M;
    cin >> N >> M;

    if(N == 1 || M == 1) {
        cout << 1 << endl;
        return 0;
    }
    
    if((N * M) % 2 == 0) cout << (N * M) / 2 << endl;
    else cout << (N * M) / 2 + 1 << endl;
    
    return 0;
}