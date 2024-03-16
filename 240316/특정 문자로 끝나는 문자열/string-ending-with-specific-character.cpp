#include <iostream>
#include <string>
using namespace std;
int main() {
    string str[10];
    char alp;
    bool y_n = false;
    for (int i = 0; i < 10; i++) {
        cin >> str[i];
    }
    cin >> alp;

    for (int i = 0; i < 10; i++) {
        if (str[i][str[i].length() - 1] == alp) {
             y_n = true;
            cout << str[i] << endl;
        }
    }
    if (y_n == false)
        cout << "None";
    // 여기에 코드를 작성해주세요.
    return 0;
}