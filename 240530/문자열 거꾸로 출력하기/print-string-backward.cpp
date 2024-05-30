#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string str;
    while(true) {
        cin >> str;
        if (str == "END")
            break;
        else {
            reverse(str.begin(), str.end());
            cout << str << endl;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}