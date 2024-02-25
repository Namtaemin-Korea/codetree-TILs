#include <iostream>
using namespace std;
int main() {
    int n, arr[100], min_val = 2147483647, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < min_val)
            min_val = arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (min_val == arr[i])
            cnt++;
    }
    cout << min_val << ' ' << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}