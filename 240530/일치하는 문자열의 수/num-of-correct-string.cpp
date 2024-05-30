#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string A;
    cin >> n >> A;
    string str;
    int output = 0;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (A == str) {
            output++;
        }
    }
    cout << output;
    // 여기에 코드를 작성해주세요.
    return 0;
}