#include <iostream>
using namespace std;
int main() {
    int aa, ba;
    char as, bs;
    cin >> aa >> as >> ba >> bs;
    if ((aa >= 19 && as == 'M') || (ba >= 19 && bs == 'M')) {
        cout << true;
    }
    else {
        cout << false;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}