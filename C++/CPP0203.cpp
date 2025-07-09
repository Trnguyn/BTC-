#include <iostream>
using namespace std;

int main() {
    int test, n;
    int a[100000];
    bool flag[100000] = {false};
    cin >> test;

    while (test--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > 0 && a[i] <= n) {
                flag[a[i]] = true;
            }
        }

        for (int i = 1; i <= n + 1; i++) {
            if (!flag[i]) {
                cout << i << endl;
                break;
            }
        }

        
        for (int i = 0; i < n; i++) {
            if (a[i] > 0 && a[i] <= n) {
                flag[a[i]] = false;
            }
        }
    }

    return 0;
}