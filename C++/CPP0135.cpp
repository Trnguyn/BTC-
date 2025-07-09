#include<iostream>
using namespace std;

bool ktrasonguyento(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

void findso3uocso(int n){
    for(int i = 1;  i * i <= n; i++){
        if(ktrasonguyento(i)){
            cout << i * i << " ";
        }
    }
}

int main(){
    int test;
    cin >> test;
    while (test > 0){
        long long number;
        cin >> number;
        findso3uocso(number);
        cout << endl;
        test --;
    }
    return 0;
}