#include <iostream>
#include <string>
using namespace std;
int main() {
    char alp;
    cin >> alp;
    if (alp == 'z')
        cout << 'a';
    else
        cout << ((char)(alp+1));    
    // 여기에 코드를 작성해주세요.
    return 0;
}