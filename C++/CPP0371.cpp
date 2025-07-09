#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c){
    c = tolower(c);
    return c == 'a' || c == 'u' || c == 'e' || c == 'o' || c == 'i' || c == 'y';
}
int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(!isVowel(s[i])){
            cout << "." << (char)tolower(s[i]);
        }
    }
    cout << endl;
    return 0;
}