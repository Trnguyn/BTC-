#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int a[n][m], b[n][m] = {}; // ma trận gốc và ma trận kết quả

        // Nhập ma trận ban đầu
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        // Quay từng lớp ma trận theo chiều kim đồng hồ
        for (int i = n - 1; i >= n / 2; i--) {
            for (int j = n - i; j <= i; j++) {
                // Xoay theo lớp: cập nhật ma trận b từ ma trận a
                b[n - i - 1][j]     = a[n - i - 1][j - 1];
                b[i][j - 1]         = a[i][j];
                b[j][i]             = a[j - 1][i];
                b[j - 1][n - i - 1] = a[j][n - i - 1];
            }
        }

        // In ma trận sau khi xoay: nếu chưa đổi thì in a[i][j]
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (b[i][j] == 0) cout << a[i][j] << " ";
                else cout << b[i][j] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}