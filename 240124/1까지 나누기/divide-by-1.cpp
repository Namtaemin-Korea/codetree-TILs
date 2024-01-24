#include <iostream>
using namespace std;
int main() {
    int n, i = 1;
    cin >> n;
    for (;;) {
        n /= i;
        if (n <= 0) {
            cout << i;
            break;
        }
        i++;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}