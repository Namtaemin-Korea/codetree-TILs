#include <iostream>
using namespace std;
int main() {
    int age, sum = 0, peo = 0;
    while (1) {
        cin >> age;
        if (age >= 30 || age < 20) {
            break;
        }
        peo++;
        sum += age;
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << (double)sum / (double)peo;
    // 여기에 코드를 작성해주세요.
    return 0;
}