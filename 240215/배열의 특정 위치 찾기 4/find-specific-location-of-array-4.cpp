#include <iostream>
using namespace std;
int main() {
    int arr[10], cnt = 0, cnt2 = 0, sum = 0;
    while (cnt < 10) {
        cin >> arr[cnt];
        if (arr[cnt] == 0) {
            break;
        }
        cnt++;
    }
    for (int i = 0; i < cnt; i++) {
        if (arr[i] % 2 == 0) {
            cnt2++;
            sum += arr[i];
        }
    }
    cout << cnt2 << ' ' << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}