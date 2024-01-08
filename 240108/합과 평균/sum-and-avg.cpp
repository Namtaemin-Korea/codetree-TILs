#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    cout << a + b << " ";
    cout << fixed;
    cout.precision(1);
    cout << double(a + b) / 2;
    // 여기에 코드를 작성해주세요.
    return 0;
}