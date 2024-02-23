#include <iostream>
using namespace std;
int main() {
    int n, m, arr[100], cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == m) {
            cnt++;
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}