#include <iostream>
using namespace std;

int main() {
    int m, s;
    cin >> m >> s;

    if ((s == 0 && m > 1) || (s > m * 9)) {
        cout << "-1 -1";
        return 0;
    } else {
        string maxNum = "";
        int sum = s;

        for (int i = 0; i < m; i++) {
            int digit = min(9, sum);
            maxNum += char(digit + '0');
            sum -= digit;
        }

        string minNum = "";
        sum = s;
        for (int i = 0; i < m; i++) {
            int start = (i == 0) ? 1 : 0;
            for (int digit = start; digit <= 9; digit++) {
                if (sum - digit <= 9 * (m - i - 1) && sum -digit >= 0) {
                    minNum += char(digit + '0');
                    sum -= digit;
                    break;
                }
            }
        }

        cout << minNum << " " << maxNum;
    }

    return 0;
}