#include <iostream>
#include <string>
using namespace std;
int main() {
    string str[20];
    int n;
    double cnt = 0, sum = 0;
    char alp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    cin >> alp;

    for (int i = 0; i < n; i++) {
        if (str[i][0] == alp) {
            cnt++;
            sum += str[i].length();
        }
    }

    cout << cnt << ' ';
    cout << fixed;
    cout.precision(2);
    cout << sum / cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}