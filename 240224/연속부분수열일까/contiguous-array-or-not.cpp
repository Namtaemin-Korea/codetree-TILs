#include <iostream>
using namespace std;
int main() {
    int n1, n2, A[100] = { 0, }, B[100] = { 0, };
    bool output = false;
    
    //입력
    cin >> n1 >> n2;
    for (int i = 0; i < n1; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> B[i];
    }

    //알고리즘
    for (int i = 0; i < n1; i++) {
        if (A[i] == B[0]) {
            int cnt = 1;
            for (int j = i + 1; j < n2; j++) {
                if (A[j] != B[cnt++]) {
                    output = false;
                    break;
                }
                else {
                    output = true;
                }
            }
        }
    }
    //출력
    if (output == true) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}