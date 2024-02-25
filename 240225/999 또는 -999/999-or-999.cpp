#include <iostream>
using namespace std;
int main() {
    int arr[100], max_val = -1000, min_val = 1000, cnt = 0;
    while (true) {
        cin >> arr[cnt];
        if (arr[cnt] == 999 || arr[cnt] == -999) {
            cout << max_val << ' ' << min_val;
            break;
        }
        if (arr[cnt] > max_val)
            max_val = arr[cnt];
        else if (arr[cnt] < min_val)
            min_val = arr[cnt];
        cnt++;
    } 
    // 여기에 코드를 작성해주세요.
    return 0;
}