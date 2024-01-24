#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= 100; i++) {
        sum += i;
        if (sum >= n) {
            n = i;
            break;
        }
    }
    cout << n;
    // 여기에 코드를 작성해주세요.
    return 0;
}