#include <iostream>
using namespace std;

int main() {
    int thang, year;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> year;

    switch (thang) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "[*] Thang " << thang << " co 31 ngay." << endl;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            cout << "[*] Thang " << thang << " co 30 ngay." << endl;
            break;

        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                cout << "[*] Thang 2 co 29 ngay." << endl;
            } else {
                cout << "[*] Thang 2 co 28 ngay." << endl;
            }
            break;

        default:
            cout << "Khong ton tai thang " << thang << "." << endl;
    }

    return 0;
}