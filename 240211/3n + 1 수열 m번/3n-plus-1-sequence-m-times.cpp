#include <iostream>
using namespace std;
int main() {
    int m, n, cnt = 0;
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> n;
        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
                cnt++;
            }
            else {
                n = n * 3 + 1;
                cnt++;
            }
        }
        cout << cnt << endl;
        cnt = 0;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}