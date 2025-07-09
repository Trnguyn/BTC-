#include<iostream>
using namespace std;
int main(){
    int T,N,M;
    int A[100][100];
    cin >> T;
    while(T--){
        cin >> N >> M;
        int row[100] = {0};
        int col[100] = {0};
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                cin >> A[i][j];
            }
        }
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(A[i][j] == 1){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (row[i] == 1 || col[j] == 1) {
                    A[i][j] = 1;
                }
            }       
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cout << A[i][j] << " ";
            }
        cout << endl;
        }
    }
    return 0;
}