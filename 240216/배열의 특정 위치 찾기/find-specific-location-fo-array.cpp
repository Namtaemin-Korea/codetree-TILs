#include <iostream>
using namespace std;
int main() {
    int arr[10], sum = 0, avg = 0, cnt = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if ((i+1) % 2 == 0) {
            sum += arr[i];
        }
        if ((i+1) % 3 == 0) {
            avg += arr[i];
            cnt++;
        }
    }
    cout << sum << ' ';
    cout << fixed;
    cout.precision(1);
    cout << (double)avg / cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}