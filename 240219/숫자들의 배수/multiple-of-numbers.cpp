#include <iostream>
using namespace std;
int main() {
    int n, cnt = 1, k = 0;
    cin >> n;
    while (true) {
        cout << cnt * n << ' ';
        if ((cnt * n) % 5 == 0) {
            k++;
            if (k == 2)
                break;
        }
        cnt++;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}