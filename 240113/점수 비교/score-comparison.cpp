#include <iostream>
using namespace std;

int main() {
    int A_m, A_e, B_m, B_e;
    cin >> A_m >> A_e >> B_m >> B_e;
    //cout << A_m << " " << A_e << "\n" << B_m << " " << B_e; 
    if (A_m > B_m && A_e > B_e) {
        cout << '1';
    }
    else {
        cout << '0';
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}