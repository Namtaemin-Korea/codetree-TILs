#include <iostream>
using namespace std;
int main() {
    char arr[6] = { 'L', 'E', 'B', 'R', 'O', 'S'}, input;
    cin >> input;
    int idx = -1;
    for (int i = 0; i < 6; i++) {
        if (input == arr[i])
        idx = i;
    }
    if (idx == -1)
    cout << "None";
    else
    cout << idx;
    // 여기에 코드를 작성해주세요.
    return 0;
}