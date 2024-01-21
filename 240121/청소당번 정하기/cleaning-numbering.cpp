#include <iostream>
using namespace std;
int main() {
    int n, cnt1 = 0, cnt2 = 0, cnt3 = 0;
    cin >> n;
    cnt1 = n / 2;
    cnt2 = n / 3;
    cnt3 = n / 12;
    if (n >= 6) {
        cnt1 -= (n / 6);
        cnt2 -= (n / 12);
    }
    cout << cnt1 << " " << cnt2 << " " << cnt3;

    // 여기에 코드를 작성해주세요.
    return 0;
}