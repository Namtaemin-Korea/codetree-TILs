#include <iostream>
using namespace std;
int main() {
    int arr[10], max_val = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    } 
    cout << max_val;
    // 여기에 코드를 작성해주세요.
    return 0;
}