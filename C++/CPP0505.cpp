#include <iostream>
#include <string>
using namespace std;

struct nhanVien {
    string maNV;
    string hoTen;
    string gioiTinh;
    string ngaySinh;
    string diaChi;
    string maSoThue;
    string ngayKyHD;
};
void nhapThongTin(nhanVien &nv) {
    nv.maNV = "00001";
    getline(cin, nv.hoTen);
    getline(cin, nv.gioiTinh);
    getline(cin, nv.ngaySinh);
    getline(cin, nv.diaChi);
    getline(cin, nv.maSoThue);
    getline(cin, nv.ngayKyHD);
}

void inThongTin(nhanVien &nv) {
    cout << nv.maNV << " "
         << nv.hoTen << " "
         << nv.gioiTinh << " "
         << nv.ngaySinh << " "
         << nv.diaChi << " "
         << nv.maSoThue << " "
         << nv.ngayKyHD << endl;
}

int main() {
    nhanVien nv;
    nhapThongTin(nv);
    inThongTin(nv);
    return 0;
}