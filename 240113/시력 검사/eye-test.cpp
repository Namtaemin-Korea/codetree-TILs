#include <iostream>
using namespace std;

int main() {
    double l, r;
    cin >> l >> r;
    if (l >= 1.0 && r >= 1.0) {
        cout << "High";
    }
    else if (l >= 0.5 && r >= 0.5) {
        cout << "Middle";
    }
    else {
        cout << "Low";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}