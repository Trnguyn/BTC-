#include <iostream>
using namespace std;

int main() {
    int T, N;
    int A[150][150];

    cin >> T;
    while (T--) {
        cin >> N;

        // Nhập ma trận
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> A[i][j];
            }
        }

        // In biên ma trận
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == 0 || i == N - 1 || j == 0 || j == N - 1) {
                    cout << A[i][j] << "  ";
                } else {
                    cout << "   ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}