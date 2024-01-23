#include <iostream>
using namespace std;
int main() {
    int n, k;
    double sum = 0, avg = 0, tmp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        sum += k;
    }
    avg = sum / n;
    tmp = avg;
    cout << sum << " ";
    if (tmp *= 100 % 10 > 5) {
        avg += 0.1;
    }
    cout << fixed;
    cout.precision(1);
    cout << avg;
    // 여기에 코드를 작성해주세요.
    return 0;
}