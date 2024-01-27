#include <iostream>
using namespace std;
int main() {
    int n;
    bool satisfied = false;
    cin >> n;
    for (int i = n - 1; i > 1; i--) {
        if (n % i == 0) {
            satisfied = true;
        }
    }
    if (satisfied == true) {
        cout << 'C';
    }
    else {
        cout << 'N';
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}