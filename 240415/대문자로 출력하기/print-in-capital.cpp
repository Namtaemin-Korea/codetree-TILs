#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i]))
            cout << (char) toupper(str[i]);
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}