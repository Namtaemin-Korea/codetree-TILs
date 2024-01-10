#include <iostream>
#include <string>
using namespace std;

int main() {
    int score;
    string output;
    cin >> score;
    output = score == 100 ? "pass" : "failure";
    cout << output;
    // 여기에 코드를 작성해주세요.
    return 0;
}