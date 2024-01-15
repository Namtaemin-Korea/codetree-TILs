#include <iostream>
using namespace std;
int main() {
    bool sex;
    int age;
    cin  >> sex >> age;
    if (sex == 0) {
        if (age >= 19) {
            cout << "MAN";
        }
        else {
            cout << "BOY";
        }
    }
    else {
        if (age >= 19) {
            cout << "WOMAN";
        }
        else {
            cout << "GIRL";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}