#include <iostream>
using namespace std;

int main() {
    int t, w;
    cin >> t >> w;
    cout << (10000 * w) / (t * t) << "\n";
    if ((10000 * w) / (t * t) > 25) {
    cout << "Obesity";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}