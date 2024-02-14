#include <iostream>
using namespace std;
int main() {
    int arr[10], cnt = 0;
    while (cnt < 10) {
        cin >> arr[cnt];
        //cout << "arr[" << cnt << "] = " << arr[cnt] << endl;
        if (arr[cnt] == 0) {
            break;
        }
        cnt++;
    }
    cnt--;
    while (cnt >= 0) {
        cout << arr[cnt] << ' ';
        cnt--;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}