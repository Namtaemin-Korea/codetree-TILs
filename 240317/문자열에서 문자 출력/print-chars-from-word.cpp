#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;
    int len;
    len = str.length();
    
    for (int i = 0; i < len; i++) {
        cout << str[i] << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}