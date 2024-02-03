#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << "\n";
    for (int i = 0; i < n - 1; i++) { // 세로
        for (int j = 0; j < n; j++) { // 가로
            if (j <= i || j == 0 || j == (n - 1)) {
            cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}