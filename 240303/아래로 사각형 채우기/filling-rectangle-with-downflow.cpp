#include <iostream>
using namespace std;
int main() {
    int n, a[10][10], cnt = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[j][i] = cnt++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}