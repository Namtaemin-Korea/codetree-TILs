#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        bool output = false;
        for (int j = 2; j <= i - 1; j++) {
            if (i % j == 0) {
                output = true;
                break;
            }
        }
        if (output == false) {
            cout << i << " ";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}