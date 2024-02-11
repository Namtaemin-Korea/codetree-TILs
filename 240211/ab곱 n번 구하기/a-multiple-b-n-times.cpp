#include <iostream>
using namespace std;
int main() {
    int n, a, b, output = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a >> b;
        for (int j = a; j <= b; j++) {
            output *= j;
        }
        cout << output << endl;
        output = 1;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}