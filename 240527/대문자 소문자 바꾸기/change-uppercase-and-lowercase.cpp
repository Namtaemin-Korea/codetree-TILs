#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] <= 'Z')
            cout << (char)(str[i] + 32);
        else
            cout << (char)(str[i] - 32);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}