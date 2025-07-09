#include <iostream>
using namespace std;
int main(){
    int test;
    cin >> test;
    char c,r;
    while (test > 0){
        cin >> c;
        if('a' <= c && c <= 'z'){
            r = c - 32;
        }
        else
            r = c + 32;
        cout << r << endl ;
        test --;
    }
    return 0;
}