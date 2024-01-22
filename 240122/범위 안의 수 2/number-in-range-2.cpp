#include <iostream>
using namespace std;
int main() {
    int n, val = 0;
    double sum = 0, avg = 0, tmp;
    for (int i = 0; i < 10; i++) {
        cin >> n;
        if (n >= 0 && n <= 200) {
            val++;
            sum += n;
        }
    }
    avg = sum / val;
    tmp = avg;
    cout << sum << " ";
    if (tmp *= 100 % 10 >= 5) {
        avg += 0.1;
    }
    cout << fixed;
    cout.precision(1);
    cout << avg;
    // 여기에 코드를 작성해주세요.
    return 0;
}