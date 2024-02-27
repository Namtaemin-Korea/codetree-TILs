#include <iostream>
using namespace std;
int main() {
    int arr[4][4], output[4] = { 0, };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
            output[i] += arr[i][j];
        }
        cout << output[i] << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}