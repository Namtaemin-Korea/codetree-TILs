#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < 9; i++) {
        for (int j = b; j > a - 1; j--) {
            cout << j << " * " << i + 1 << " = " << j * (i + 1);
            j--;
            if (j > a) {
                cout << " / ";
            }
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}