#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        for (int i = a; i >= b; i--) {
            cout << a << " ";
            a--;
        }
    }
    else {
        for (int i = b; i >= a; i--) {
            cout << b << " ";
            b--;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}