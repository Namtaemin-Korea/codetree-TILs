#include <iostream>
using namespace std;
int main() {
    int a, b, sum = 0;
    cin >> a >> b;
    if (a > b) {
        int tmp;
        tmp = a;
        a = b;
        b = tmp;
    }
    for (int i = a; i <= b; i++) {
        if (i % 5 == 0) {
            sum += i;
        }
    }
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}