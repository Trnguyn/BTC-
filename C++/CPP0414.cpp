#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        long long A[1000000];
        cin >> n;
        for(int i = 0; i < n ; i ++){
            cin >> A[i];
        }

        set<int> digits;
        for(int i = 0; i < n; i++){
            int x = A[i];

            if(x == 0){
                digits.insert(0);
                continue;
            }

            while (x > 0){
                int d = x % 10;
                digits.insert(d);
                x /= 10;
            }
        }

        for(int d : digits){
            cout << d << " ";
        }
        cout << endl;
    }
    return 0;
}
