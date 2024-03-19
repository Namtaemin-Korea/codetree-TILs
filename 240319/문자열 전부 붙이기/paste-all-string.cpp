#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;

    string str[10], tot_str = "";
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        tot_str += str[i];
    }

    cout << tot_str;
    // 여기에 코드를 작성해주세요.
    return 0;
}