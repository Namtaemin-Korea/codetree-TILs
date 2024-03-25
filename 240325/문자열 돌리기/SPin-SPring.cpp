#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;

    int len = str.length();
    for (int i = 0; i < len + 1; i++) {
        cout << str << endl;
        str = str.substr(len - 1, 1) + str.substr(0, len - 1);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}