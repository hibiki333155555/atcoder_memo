#include <iostream>
using namespace std;


int main() {
    int A, B;
    cin >> A >> B;

    int sa = 1;
    int count = 0;
    while(sa < B) {
        sa--;
        sa += A;
        count++;
    }

    cout << count << endl;
    return 0;
}