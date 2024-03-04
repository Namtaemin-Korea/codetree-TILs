#include <iostream>
using namespace std;
int main() {
    int n, m, cnt = 0, a[100][100];
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                a[j][i] = cnt++;
            }
        }
        else {
            for (int j = n - 1; j >= 0; j--) {
                a[j][i] = cnt++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}