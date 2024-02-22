#include <iostream>
using namespace std;
int main() {
    char arr[3];
    int arr2[3], jin[4] = { 0, };
    for (int i = 0; i < 3; i++) {
        cin >> arr[i] >> arr2[i];
        if (arr[i] == 'Y') {
            if (arr2[i] >= 37) {
                jin[0]++;
            }
            else {
                jin[1]++;
            }
        }
        else {
            if (arr2[i] >= 37) {
                jin[2]++;
            }
            else {
                jin[3]++;
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        cout << jin[i] << ' ';
    }
    if (jin[0] >= 2)
    cout << 'E';
    // 여기에 코드를 작성해주세요.
    return 0;
}