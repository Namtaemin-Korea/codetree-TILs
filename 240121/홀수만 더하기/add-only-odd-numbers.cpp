#include <iostream>
using namespace std;
int main() {
    int n, k, sum = 0;
    cin  >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (k % 2 != 0 && k % 3 == 0) {
            sum += k;
        }
    }
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}