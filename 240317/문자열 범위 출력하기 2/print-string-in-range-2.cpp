#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    int num, len;
    cin >> str >> num;
    len = str.length();
    if (num >= len) {
        for (int i = len - 1; i >= 0; i--) {
            cout << str[i];
        }
    }
    else {
        for (int i = len - 1; i >= len - num; i--) {
            cout << str[i];
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}