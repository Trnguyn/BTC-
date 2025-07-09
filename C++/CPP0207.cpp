#include <iostream>
using namespace std;

int main(){
    int T, n, d, A[1000000];
    cin >> T;
    while (T--){
        cin >> n >> d;
        int B[1000000];
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }

        int k = 0;
        for(int j = d; j < n; j++){
            B[k++] = A[j];
        }
        for(int j = 0; j < d; j++){
            B[k++] = A[j];
        }

        for(int i = 0; i < n; i++){
            cout << B[i] << " ";
        }
        cout << endl;
    }
    return 0;
}