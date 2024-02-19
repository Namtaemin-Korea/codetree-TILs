#include <iostream>
using namespace std;
int main() {
    int arr[110], cnt = 0;
    while (true) {
        cin >> arr[cnt];
        if (arr[cnt] == 0)
            break;
        cnt++;
    }
    for (int i = 0; i < cnt; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] + 3 << ' ';
        }
        else {
            cout << arr[i] / 2 << ' ';
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}