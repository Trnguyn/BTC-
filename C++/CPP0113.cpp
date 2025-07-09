#include <iostream>
using namespace std;
int main(){
    int test;
    long long number,remain;
    cin >> test;
    while(test > 0){
        cin >> number;
        if(number % 100 == 86){
            cout << 1 << endl;
        }
        else
            cout << 0 << endl;
        test --;
        }
    return 0;
}