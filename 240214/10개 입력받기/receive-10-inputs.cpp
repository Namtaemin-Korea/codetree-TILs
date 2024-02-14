#include <iostream>
using namespace std;
int main() {
    int arr[10], cnt = 0;
    double sum = 0, avg;
    while (cnt <= 9) {
        cin >> arr[cnt];
        if (arr[cnt] == 0)
            break;
        sum += arr[cnt];
        cnt++;
    }
    avg = sum / cnt;
    cout << sum << ' ';
    cout << fixed;
    cout.precision(1);
    cout << avg;
    // 여기에 코드를 작성해주세요.
    return 0;
}