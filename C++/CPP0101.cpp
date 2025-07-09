#include <iostream>
using namespace std;
int main(){
    long long n,s,total;
    cin >> n;
    while (n > 0){
        cin >> s;
        total = (s*(s+1))/2;
        cout << total << endl;
        n --;
        }
    return 0;
}