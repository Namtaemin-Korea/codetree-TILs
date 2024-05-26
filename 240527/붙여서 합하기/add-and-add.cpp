#include <iostream>
#include <string>
using namespace std;
int main() {
    string A, B;
    cin >> A >> B;
    int AB_int, BA_int;
    AB_int = stoi(A + B);
    BA_int = stoi(B + A);
    int output = AB_int + BA_int;
    cout << output;
    // 여기에 코드를 작성해주세요.
    return 0;
}