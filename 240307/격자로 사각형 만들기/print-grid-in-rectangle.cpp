#include <iostream>
using namespace std;
int main() {
    int n, a[10][10];
    cin >> n;
    for (int i = 0; i < n; i++) {
        a[i][0] = 1;
        a[0][i] = 1;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            a[i][j] = a[i-1][j] + a[i-1][j-1] + a[i][j-1];
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