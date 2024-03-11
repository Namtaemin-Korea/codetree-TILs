#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    int a[3], max = 0, min = 20;
    char str1[20], str2[20], str3[20];
    cin >> str1 >> str2 >> str3;
    a[0] = strlen(str1);
    a[1] = strlen(str2);
    a[2] = strlen(str3);

    for (int i = 0; i < 3; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    cout << max - min;
    // 여기에 코드를 작성해주세요.
    return 0;
}