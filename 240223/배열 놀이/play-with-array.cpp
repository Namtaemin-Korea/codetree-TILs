#include <iostream>
using namespace std;
int main() {
    int n, m, q, a, b, arr_n[100];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr_n[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> q;
        if (q == 1) {
            cin >> a;
            cout << arr_n[a - 1] << endl;
        }
        else if (q == 2) {
            cin >> a;
            for (int j = 0; j < n; j++) {
                if (a == arr_n[j]) {
                    cout << j + 1 << endl;
                    break;
                }
                if (j == n - 1)
                cout << 0 << endl;
            }
        }
        else if (q == 3) {
            cin >> a >> b;
            for (int j = a; j <= b; j++) {
                cout << arr_n[j - 1]<< ' ';
            }
            cout << endl;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}