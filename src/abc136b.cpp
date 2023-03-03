#include <iostream>
using namespace std;


int main() {
    int N;
    cin >> N;

    int count = 0;

    for(int i = 1; i <= N; i++) {
        int k = 1;
        int n = i;
        while(n >= 10) {
            n /= 10;
            k++;
        }
        if(k % 2 == 1)count++;
    }

    cout << count << endl;
    return 0;
}