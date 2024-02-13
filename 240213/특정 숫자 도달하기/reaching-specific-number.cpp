#include <iostream>
using namespace std;
int main() {
    int arr[10] = { 0, }, i = 0, sum = 0;
    while (i < 10) {
        cin >> arr[i];
        if (arr[i] >= 250) {
            break;
        }
        sum += arr[i];
        i++;
    }
    cout << sum << ' ';
    cout << fixed;
    cout.precision(1);
    cout << (double)sum / i;
    // 여기에 코드를 작성해주세요.
    return 0;
}