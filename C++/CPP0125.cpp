#include <iostream>
using namespace std;
bool ktrasonguyento(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
int main(){
    int a,b, temp;
    cin >> a >> b;
    if(b < a){
        temp = b;
        b = a;
        a = temp;
    }
    for(int i = a + 1; i < b; i++){
        if(ktrasonguyento(i) == true){
            cout << i << " ";
        }
    }
    return 0;
}