#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;
    double cnt = 0;
    for (int i = 0; i < str.length(); i++) {
        cnt += (str[i] - 48);
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}