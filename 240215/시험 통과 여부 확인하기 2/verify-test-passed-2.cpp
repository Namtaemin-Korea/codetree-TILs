#include <iostream>
using namespace std;
int main() {
    int n, arr[10], cnt = 0;
    int sub1[10], sub2[10], sub3[10], sub4[10];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> sub1[i] >> sub2[i] >> sub3[i] >> sub4[i];
        int sum = 0;
        sum = sub1[i] + sub2[i] + sub3[i] + sub4[i];
        if ((sum / 4) >= 60) {
            cout << "pass" << endl;
            cnt++;
        }
        else {
            cout << "fail" << endl;;
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}