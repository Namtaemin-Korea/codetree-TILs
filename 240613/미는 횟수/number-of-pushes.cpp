#include <iostream>
#include <string>
using namespace std;
int main() {
    string A, B;
    int output = 0;
    cin >> A >> B;
    for (int i = 0; i < A.length() + 1; i++) {
        if (A != B) {
        A = A.substr(1, A.length()) + A.substr(0, 1);
        output++;
        }
        else {
            cout << output;
            break;
        }
        if (i == A.length()) {
            cout << -1;
            break;
        }
        
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}