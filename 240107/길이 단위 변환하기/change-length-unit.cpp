#include <iostream>
using namespace std;

int main() {
    double a = 9.2, b = 1.3;

    cout << fixed;
    cout.precision(1);

    cout << a << "ft = " << a * 30.48 << "cm\n";
    cout << b << "mi = " << b * 160934 << "cm";
    // 여기에 코드를 작성해주세요.
    return 0;
}