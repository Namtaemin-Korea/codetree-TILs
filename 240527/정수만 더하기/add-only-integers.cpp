#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;
    int sum = 0;
    for (int i = 0; i < str.length(); i++) {
        if ((str[i] >= '0') && (str[i] <= '9')) {
            sum += (str[i] - 48);
        }
    }
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}