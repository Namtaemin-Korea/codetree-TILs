#include <iostream>
using namespace std;
int main() {
    int m;
    cin >> m;
    if (m > 2 && m < 12) {
        if (m > 8) {
            cout << "Fall";
        }
        else if (m > 5) {
            cout << "Summer";
        }
        else {
            cout << "Spring";
        }
    }
    else {
        cout << "Winter";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}