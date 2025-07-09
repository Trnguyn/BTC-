#include <iostream>
using namespace std;
int main(){
    int n, A[100], stored[1001] = {0};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
        stored[A[i]] = 1;
    }
    for(int i = 1; i <= 1000; i ++){
        if (stored[i]) cout << i << " ";
    }

    return 0;
}   