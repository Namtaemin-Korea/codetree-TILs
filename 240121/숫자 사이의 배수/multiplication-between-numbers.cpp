#include <iostream>
using namespace std;
int main() {
    int a, b;
    double sum = 0;
    cin >> a >> b;
    for (int i = (a / 5) + 1; i <= (b / 5); i++) {
        sum += (5 * i);
    }
    for (int i = (a / 7) + 1; i <= (b / 7); i++) {
        sum += (7 * i);
    }
    if (b >= 35) {
        for (int i = (a / 35) + 1; i <= (b / 35); i++) {
            sum -= (35 * i);
        }
    }
    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << (sum / (((b / 5) - (a / 5)) + ((b / 7) - (a / 7)) - ((b / 35) - (a / 35))));
    // 여기에 코드를 작성해주세요.
    return 0;
}