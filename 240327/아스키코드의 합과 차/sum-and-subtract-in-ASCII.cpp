#include <iostream>
#include <string>
using namespace std;
int main() {
    char a, b;
    cin >> a >> b;
    cout << (int)a + (int)b << ' ';
    if ((int)a > (int)b)
        cout << (int)a - (int)b;
    else
        cout << (int)b - (int)a;
        // 여기에 코드를 작성해주세요.
    return 0;
}