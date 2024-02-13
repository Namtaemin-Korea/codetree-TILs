#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    double sum = 0, arr[5] = { 0, }, avg;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    avg = sum / n;
    avg = round(10 * avg) / 10;
    cout << fixed;
    cout.precision(1);
    cout << avg << endl;

    if (avg >= 4.0) {
        cout << "Perfect";
    }
    else if (avg >= 3.0) {
        cout << "Good";
    }
    else {
        cout << "Poor";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}