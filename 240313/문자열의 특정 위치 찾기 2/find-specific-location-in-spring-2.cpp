#include <iostream>
#include <string>
using namespace std;
int main() {
    int cnt = 0;
    char alp;
    string str[5] = {"apple", "banana", "grape", "blueberry", "orange" };
    cin >> alp;
    for (int i = 0; i < 5; i++) {
        if ((str[i][2] == alp) || (str[i][3] == alp)) {
            cnt++;
            cout << str[i] << endl;
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}