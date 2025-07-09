#include<iostream>
using namespace std;

void phanTichThuaSo(long long n) {
    for (long long i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 1) cout << n << " ";
}

// int GCD(int a, int b){
//    if (b == 0)
//        return a;
//    return GCD(b, a % b);
//}

int main(){
    int test;
    cin >> test;
    while (test > 0){
        long long number;
        cin >> number;
        phanTichThuaSo(number);
        cout << endl;
        test --;
    }
    return 0;
}