
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct ThiSinh {
    string hoTen;
    string ngaySinh;
    double diem1;
    double diem2;
    double diem3;
    double tongDiem;
};

void nhapThongTin(ThiSinh &ts) {
    getline(cin, ts.hoTen);
    getline(cin, ts.ngaySinh);
    cin >> ts.diem1 >> ts.diem2 >> ts.diem3;
    ts.tongDiem = ts.diem1 + ts.diem2 + ts.diem3;
}

void inThongTin(const ThiSinh &ts) {
    cout << ts.hoTen << " " << ts.ngaySinh << " " << fixed << setprecision(1) << ts.tongDiem << endl;
}

int main() {
    ThiSinh ts;
    nhapThongTin(ts);
    inThongTin(ts);
    return 0;
}