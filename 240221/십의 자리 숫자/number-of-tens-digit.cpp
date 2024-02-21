#include <iostream>
using namespace std;
int main() {
    int arr[110], count_val[10] = { 0, }, cnt = 0;
    while (true) {
        cin >> arr[cnt];
        count_val[(arr[cnt] / 10) - 1]++;
        if (arr[cnt] == 0) {
            break;
        }
        cnt++;
    }
    for (int i = 0; i < 9; i++) {
        cout << i + 1 << " - " << count_val[i] << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}