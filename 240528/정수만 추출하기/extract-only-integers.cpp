#include <iostream>
#include <string>
using namespace std;
int main() {
    string A, B;
    cin >> A >> B;
    string sum_A, sum_B;
    for (int i = 0; i < A.length(); i++) {
        if (A[i] >= '0' && A[i] <= '9') {
            sum_A.push_back(A[i]);
        }
        else {
            break;
        }
    }
    for (int i = 0; i < B.length(); i++) {
        if (B[i] >= '0' && B[i] <= '9') {
            sum_B.push_back(B[i]);
        }
        else {
            break;
        }
    }
    int A_int, B_int;
    A_int = stoi(sum_A);
    B_int = stoi(sum_B);
    cout << A_int + B_int;
    // 여기에 코드를 작성해주세요.
    return 0;
}