#include <iostream>
using namespace std;
int main() {
    int arr[10], count_arr[10] = { 0, }, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        count_arr[arr[i] - 1]++;
    }
    for (int i = 0; i < 9; i++) {
        cout << count_arr[i] << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}