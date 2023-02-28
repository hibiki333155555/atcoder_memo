#include <iostream>
#include <string>
using namespace std;


int main() {
    string S;
    cin >> S;
    int N;
    N = S.length();

    int count = 0;

    for(int i = 0; i < N; i++) {
        if(S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C') count++;
    }

    cout << count << endl;
    return 0;
}