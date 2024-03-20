#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        str.append(tmp);
    }

    for (int i = 0; i < str.length(); i++) {
        cout << str[i];
        if ((i+1) % 5 == 0)
            cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}