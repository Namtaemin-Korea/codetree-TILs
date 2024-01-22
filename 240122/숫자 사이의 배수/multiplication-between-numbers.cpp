#include <iostream>
using namespace std;
int main() {
    int a, b, val = 0;
    double sum = 0, avg = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            val++;
            sum += i;
        }
    }
    avg = (double)sum / val; 
    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << avg;
    // 여기에 코드를 작성해주세요.
    return 0;
}