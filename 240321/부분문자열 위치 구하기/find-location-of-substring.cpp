#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1, str2;
    cin >> str1 >> str2;

    int len1, len2;
    len1 = str1.length();
    len2 = str2.length();

    bool y_n = true;

    for (int i = 0; i < len1; i++) {
        if (str1[i] == str2[0]) {
            y_n = true;
            for (int j = 0; j < len2; j++) {
                if (str1[i + j] != str2[j]) {
                    y_n = false;
                }
            }
            if (y_n == true) {
                cout << i;
                break;
            }
        }
        else 
            y_n = false;
    }

    if (y_n == false)
    cout << -1;
    // 여기에 코드를 작성해주세요.
    return 0;
}