#include <iostream>
using namespace std;
int main() {
    int input, count_arr[10] = { 0, }, n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;
        count_arr[input - 1]++;
    }

    for (int i = 0; i < 9; i++) {
        cout << count_arr[i] << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}