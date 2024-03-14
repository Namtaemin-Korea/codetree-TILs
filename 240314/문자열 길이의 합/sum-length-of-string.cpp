#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, sum = 0, cnt = 0;
    string str[10];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        sum += str[i].length();
        if (str[i][0] == 'a')
        cnt++;
    }
    cout << sum << ' ' << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}