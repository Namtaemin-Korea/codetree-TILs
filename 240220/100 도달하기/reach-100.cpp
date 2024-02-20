#include <iostream>
using namespace std;
int main() {
    int n, arr[20], cnt = 3;
    cin >> n;
    arr[0] = 1;
    arr[1] = n;
    arr[2] = 1 + n;
    while (true) {
        arr[cnt] = arr[cnt - 2] + arr[cnt - 1];
        if (arr[cnt] >= 100) 
            break;
        cnt++;
    }
    for (int i = 0; i <= cnt; i++) {
        cout << arr[i] << ' ';
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}