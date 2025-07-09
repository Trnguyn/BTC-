#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("PTIT.in");
    ofstream out("PTIT.out");

    string line;
    while(getline(in, line)) {
        out << line << endl;
    }

    in.close();
    out.close();
    return 0;
}