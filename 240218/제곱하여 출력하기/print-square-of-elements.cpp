#include <iostream>
using namespace std;
int main() {
    int n, arr[110];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i] *= arr[i];
        cout << arr[i] << ' ';
        }
    // 여기에 코드를 작성해주세요.
    return 0;
}