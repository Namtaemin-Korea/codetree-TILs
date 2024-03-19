#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;
    for (int i = str.length(); i >= 0; i--) {
        if (i % 2 != 0)
        cout << str[i];
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}