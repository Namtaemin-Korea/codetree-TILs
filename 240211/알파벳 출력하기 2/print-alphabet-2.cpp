#include <iostream>
using namespace std;
int main() {
    int n, cnt = 65;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            cout << "  ";
        }
        for (int j = i; j <= n; j++) {
            if (cnt > 'Z')
            cnt = 'A';
            cout << (char)cnt << ' ';
            cnt++;
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}