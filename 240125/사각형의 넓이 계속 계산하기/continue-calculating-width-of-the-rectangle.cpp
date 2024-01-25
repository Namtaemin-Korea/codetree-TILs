#include <iostream>
using namespace std;
int main() {
    int w, h;
    char c;
    while (1) {
        cin >> w >> h >> c;
        cout << w * h << endl;
        if (c == 'C')
        break;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}