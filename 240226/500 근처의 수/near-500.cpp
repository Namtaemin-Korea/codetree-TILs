#include <iostream>
using namespace std;
int main() {
    int arr[10], a = 1000, b = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++) {
        if ((arr[i] > 500) && (arr[i] < a))
            a = arr[i];
        else if ((arr[i] < 500) && (arr[i] > b))
            b = arr[i];
    }

    cout << b << ' ' << a;
    // 여기에 코드를 작성해주세요.
    return 0;
}