#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    char alp;
    bool y_n = false;

    cin >> s >> alp;
    if (s.find(alp) != string::npos) {
        cout << s.find(alp);
        y_n = true;
    }

    if (y_n == false)
        cout << "No";
    // 여기에 코드를 작성해주세요.
    return 0;
}