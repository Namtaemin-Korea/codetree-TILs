#include <iostream>
using namespace std;
int main() {
    double sum = 0, arr[3][5] = { 0, };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }

    cout << fixed;
    cout.precision(1);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][4] += arr[i][j];
        }
        arr[i][4] /= 4;
        cout << arr[i][4] << ' ';
    }

    cout << endl;
    
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 2; i++) {
            arr[3][j] += arr[i][j];
        }
        arr[3][j] /= 2;
        cout << arr[3][j] << ' ';
    }
    
    cout << endl;
    
    cout << sum / 8;
    // 여기에 코드를 작성해주세요.
    return 0;
}