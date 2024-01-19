#include <iostream>
using namespace std;
int main() {
    int n, k = 1;
    cin >> n;
    while ((3 * k) <= n) {
        cout << 3 * k << " ";
        k++;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}