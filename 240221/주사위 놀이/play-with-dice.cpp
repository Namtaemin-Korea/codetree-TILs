#include <iostream>
using namespace std;
int main() {
    int arr[10], count_val[6] = { 0, };
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        count_val[arr[i] - 1]++;
    }
    for (int i = 0; i < 6; i++) {
        cout << i + 1 << " - " << count_val[i] << endl; 
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}