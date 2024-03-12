#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    char alp;
    int cnt = 0;
    getline(cin, str);
    cin >> alp;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == alp)
        cnt++;
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}