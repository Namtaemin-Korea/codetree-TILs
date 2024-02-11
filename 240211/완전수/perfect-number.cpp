#include <iostream>
using namespace std;
int main() {
    int start, end, a = 0, cnt = 0;
    cin >> start >> end;
    for (int i = start; i <= end; i++) {
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                a += j;
            }
        }
        if (i == a) {
            cnt++;
        }
        a = 0;
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}