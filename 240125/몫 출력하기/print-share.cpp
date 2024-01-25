#include <iostream>
using namespace std;
int main() {
    int n, count = 0;
    while (1) {
        cin >> n;
        if (n % 2 == 0) {
            cout << n / 2 << endl;
            count++;
        }
        if (count == 3) {
            break;
        } 
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}