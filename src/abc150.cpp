#include <iostream>
#include <string>
using namespace std;


int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int count = 0;

    for(int i = 0; i < N - 2; i++) {
        if(S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C') count++;
    }

    cout << count << endl;
    return 0;
}