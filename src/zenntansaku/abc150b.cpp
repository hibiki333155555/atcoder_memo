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
        // str.substr(開始位置, 取り出す長さ);
        if(S.substr(i, 3) == "ABC") count++;
        //if(S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C') count++;
    }

    cout << count << endl;
    return 0;
}

// pythonでは str.count('ABC') で部分文字列が重複せず現れる回数を返す