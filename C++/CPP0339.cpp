#include <iostream>
using namespace std;
int main(){
    int T;
    string S;
    cin >> T;
    while(T--){
        int count[26] = {0};
        cin >> S;
        int res = 0;
        for(int i = 0; i < S.length(); i++){
            char c = S[i];
            count[c - 'a']++;
        }

        for(int i = 0; i <= 25; i++){
            int k = count[i];
            res += k + (k*(k-1))/2;
        }

        cout << res << endl;
    }
    return 0;
}