#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (n % 2 != 0) {
            cnt++;
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}