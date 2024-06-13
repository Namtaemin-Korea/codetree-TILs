#include <iostream>
#include <string>
using namespace std;
int main() {
    string str[201];
    for (int i = 0; i < 201; i++) {
        cin >> str[i];
        if (str[i] == "0") {
            cout << i << endl;
            for (int j = 0; j < i; j++) {
                cout << str[j] << endl;
                j++;
            }
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}