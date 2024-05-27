#include <iostream>
#include <string>
using namespace std;
int main() {
    string A, B;
    cin >> A >> B;
    string num_A, num_B;
    for (int i = 0; i < A.length(); i++) {
        if (A[i] >= '0' && A[i] <= '9') {
            num_A.push_back(A[i]);
        }
    }

    for (int i = 0; i < B.length(); i++) {
        if (B[i] >= '0' && B[i] <= '9') {
            num_B.push_back(B[i]);
        }
    }
    int A_int, B_int;
    A_int = stoi(num_A);
    B_int = stoi(num_B);
    cout << A_int + B_int;
    // 여기에 코드를 작성해주세요.
    return 0;
}