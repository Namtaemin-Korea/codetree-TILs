#include <iostream>
using namespace std;

int main() {
    char a[3] = { 0, };
    int output = 0, b[3] = { 0, };
    for (int i = 0; i < 3; i++) {
        cin >> a[i] >> b[i];
    }
    for (int j = 0; j < 3; j++) {
        if (a[j] == 'Y' && b[j] >= 37) {
            output += 1;
        }
    }
    if (output >= 2) {
        cout << 'E';
    } 
    else {
        cout << 'N';
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}