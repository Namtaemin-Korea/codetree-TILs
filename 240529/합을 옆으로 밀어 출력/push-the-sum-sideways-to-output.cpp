#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, num, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        cnt += num;        
    }
    string str = to_string(cnt);
    //cout << str << endl;
    char tmp = str.front();

    int len = str.length();
    str = str.substr(1, len);
    cout << str << tmp;

    // 여기에 코드를 작성해주세요.
    return 0;
}