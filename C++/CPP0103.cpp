#include<iostream>
using namespace std;
int main(){
    int n;
    long long sum = 0, factorial = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        sum += factorial;
    }
    cout << sum;
    return 0;
}