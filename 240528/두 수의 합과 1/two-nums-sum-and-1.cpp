#include <iostream>
#include <string>
using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    string str = to_string(A + B);
    int output = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '1')
            output++;
    }
    cout << output;
    // 여기에 코드를 작성해주세요.
    return 0;
}