#include <iostream>
using namespace std;
int main() {
    int start, end, cnt = 0;
    cin >> start >> end;
    for (int i = start; i <= end; i++) {
        int a = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0)
                a++;
        }
        if (a == 3)
        cnt++;
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}