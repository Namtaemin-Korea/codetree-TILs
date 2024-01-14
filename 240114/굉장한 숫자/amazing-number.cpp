#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if ((n % 2 != 0 && n % 3 ==0) || (n % 2 == 0 && n % 5 == 0)) {
        cout << "true";
    }
    else {
        cout << "no";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}