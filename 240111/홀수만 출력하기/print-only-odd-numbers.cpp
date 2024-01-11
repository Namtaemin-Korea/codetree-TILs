#include <iostream>
using namespace std;
int main() {
    int n, k[10] = { 0, };
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k[i];
        if (k[i] % 2 == 1 && k[i] % 3 == 0) {
            cout << k[i] << "\n";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}