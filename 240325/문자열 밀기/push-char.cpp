#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;

    int len = str.length();
    str = str.substr(1, len) + str.substr(0, 1);

    cout << str;
    // 여기에 코드를 작성해주세요.
    return 0;
}