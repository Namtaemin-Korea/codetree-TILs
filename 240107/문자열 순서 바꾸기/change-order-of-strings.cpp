#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    string tmp;
    tmp = s;
    s = t;
    t = tmp;
    cout << s << "\n" << t;
    // 여기에 코드를 작성해주세요.
    return 0;
}