#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1,str2;
    cin >> str1 >> str2;
    if (str1.length() > str2.length())
        cout << str1 << " " << str1.length();
    else if (str1.length() < str2.length())
        cout << str2 << " " << str2.length();
    else
        cout << "same";
    // 여기에 코드를 작성해주세요.
    return 0;
}