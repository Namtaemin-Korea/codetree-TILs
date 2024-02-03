#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < (2 * n) + 1; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < (2 * n) + 1; j++) {
                cout << "* ";
            }
            cout << "\n";
        }
        else {
            for (int j = 0; j < n + 1; j++) {
                cout << "*   ";
            }
            cout << "\n";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}