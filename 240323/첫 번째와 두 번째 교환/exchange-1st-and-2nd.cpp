#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;

    int len;
    len = str.length();

    char tmp1, tmp2;
    tmp1= str[0];
    tmp2 = str[1];

    for (int i = 0; i < len; i++) {
        if (tmp1 == str[i]) {
            str[i] = '?';
        }
        if (tmp2 == str[i]) {
            str[i] = tmp1;
        }
        if ('?' == str[i]) {
            str[i] = tmp2;
        }
    }

    cout << str;
    // 여기에 코드를 작성해주세요.
    return 0;
}