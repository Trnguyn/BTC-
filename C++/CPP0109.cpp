#include <iostream>
using namespace std;
int power(int a, int b){
    long long pow = 1;
    for(int i = 1; i <= b; i++){
        pow *= a;
    }
    return pow;
}
int main(){
    int n;
    int count = 0;
    cin >> n;
    if( n > 1 && n < 7 && n % 2 == 0){
        for(int i = power(10,n - 1); i <= power(10,n) - 1; i++){
            int number = i;
            int even = 0, odd = 0;
            while (number > 0){
                int digit = number % 10;
                if(digit % 2 == 0) even ++;
                else odd ++;
                number /= 10;
            }

            if(even == odd){
                cout << i << " ";
                count ++;
                if(count % 10 == 0){
                    cout << endl;
                }
            }
        }
    }
    return 0;
}