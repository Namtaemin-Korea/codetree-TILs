#include <iostream>
using namespace std;
int main() {
    int arr[10], sum = 0, sum2 = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (i % 2 == 0) {
            sum += arr[i];
        }
        else {
            sum2 += arr[i];
        }
    }
    int output;
    output = sum - sum2;
    if (output < 0) {
        output *= -1;
    }
    cout << output;
    // 여기에 코드를 작성해주세요.
    return 0;
}