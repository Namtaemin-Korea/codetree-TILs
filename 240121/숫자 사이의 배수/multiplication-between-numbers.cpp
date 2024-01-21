#include <iostream>
using namespace std;
int main() {
    int a, b;
    double sum = 0;
    cin >> a >> b;
    for (int i = 1; i <= (b / 5); i++) {
        sum += (5 * i);
    }
    for (int i = 1; i <= (b / 7); i++) {
        sum += (7 * i);
    }
    if (b >= 35) {
        for (int i = 0; i < (b / 35); i++) {
            sum -= (35 * i);
        }
    }
    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << (sum / ((b / 5) + (b / 7) - (b / 35)));
    // 여기에 코드를 작성해주세요.
    return 0;
}