#include <iostream>
using namespace std;

int main() {
    double earth_weight = 13, rate = 0.165;
    cout << earth_weight << " * ";

    cout << fixed;
    
    cout.precision(6);
    cout << rate << " = " << earth_weight * rate;
    // 여기에 코드를 작성해주세요.
    return 0;
}