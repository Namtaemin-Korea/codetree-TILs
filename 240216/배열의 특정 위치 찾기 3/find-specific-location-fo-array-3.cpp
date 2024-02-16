#include <iostream>
using namespace std;
int main() {
    int arr[105], cnt = 0, i = 0, sum = 0;
    while (true) {
        cin >> arr[i];
        if (arr[i] == 0) {
            for (int j = i-1; j > i - 4; j--) {
                sum += arr[j];
            }
            break;
        }
        i++;
    }
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}