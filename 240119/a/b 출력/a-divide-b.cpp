#include <iostream>
using namespace std;
int main() {
    int a, b, k, l;
    cin >> a >> b;
    k = a / b;
    l = a % b;
    cout << k << '.';
    for (int i = 1; i <= 20; i++) {
        k = (10 * l) / b;
        l = (10 * l) % b;
        cout << k;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}