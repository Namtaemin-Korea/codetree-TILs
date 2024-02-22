#include <iostream>
using namespace std;
int main() {
    int a, b, arr[10] = { 0, }, sum = 0;
    cin >> a >> b;
    while (a > 0) {
        arr[(a % b)]++;
        a /= b;
    }
    for (int i = 0; i < 10; i++) {
        sum += arr[i] * arr[i];
    }
    cout << sum;
    //cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}