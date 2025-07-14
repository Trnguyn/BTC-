#include <iostream>
#include <math.h>
using namespace std;
int minMergeToPalindrome(int A[], int n) {
    int l = 0, r = n - 1;
    int count = 0;
    while(l < r) {
        if (A[l] == A[r]) {
            l++;
            r--;
        }
        else if (A[l] < A[r]) {
            A[l + 1] += A[l];
            l++;
            count++;
        } 
        else {
            A[r - 1] += A[r];
            r--;
            count++;
        }
    }
    return count;
}
int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        cout << minMergeToPalindrome(A, n) << endl;
    }
    return 0;
}