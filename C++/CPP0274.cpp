#include <iostream>
using namespace std;

const int MAX = 1000001;
int dem[MAX]; // đếm tần suất

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, x, ans = 0;
        cin >> n;

        for (int i = 0; i < MAX; i++) {
            dem[i] = 0;
        }

        for (int i = 0; i < n; i++) {
            cin >> x;
            dem[x]++;
        }

        for (int i = 0; i < MAX; i++) {
            if (dem[i] >= 2) {
                ans += dem[i];
            }
        }

        cout << ans << endl;
    }
    return 0;
}