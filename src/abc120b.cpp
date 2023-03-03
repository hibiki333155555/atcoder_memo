#include <iostream>
using namespace std;


int main() {
    int A, B, K;
    cin >> A >> B >> K;

    int count = 0;

    for(int i = 100; i >= 1; i--) {
        if(A % i == 0 && B % i == 0) {
            count++;
            if(count == K) {
                cout << i << endl;
                return 0;
            }
        }
    }

    
    // vector<int> v;
    // for(i, 100, 1) if (A % i == 0 && B % i == 0) v.push_back(i);
    

    return 0;
}