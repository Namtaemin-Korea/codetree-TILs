#include <iostream>
using namespace std;
int main() {
    double arr[8], sum = 0;
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << fixed;
    cout.precision(1);
    cout << sum / 8;
    // 여기에 코드를 작성해주세요.
    return 0;
}