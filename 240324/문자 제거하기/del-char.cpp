#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;
    while (str.length() > 1) {
        int n;
        cin >> n;

        if (n >= str.length()) 
            str.erase(str.length() - 1, 1);
        else {
            str.erase(n, 1);
        }

        cout << str << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}