#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;

    str.erase(1, 1);
    str.erase(str.length() - 2, 1);

    cout << str;
    // 여기에 코드를 작성해주세요.
    return 0;
}