#include <iostream>
using namespace std;
int main() {
    int n, m, num = 1, a[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = num;
            cout << a[i][j] << ' ';
            num++;
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}