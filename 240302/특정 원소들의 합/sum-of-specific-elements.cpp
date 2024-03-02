#include <iostream>
using namespace std;
int main() {
    int a[4][4], sum = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
            if (j <= i)
            sum += a[i][j];
        }
    }
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}