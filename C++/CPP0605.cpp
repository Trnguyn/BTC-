#include <iostream>
using namespace std;
class phanSo
{
    private:
        long long tuSo;
        long long mauSo;
        long long GCD(long long a, long long b) {
            while (b != 0) {
                long long temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        }
    public:
        void nhap() {
            cin >> tuSo >> mauSo;
        }

        void toiGian() {
            long long gcd = GCD(tuSo, mauSo);
            tuSo /= gcd;
            mauSo /= gcd;
            if (mauSo < 0) {
                tuSo = -tuSo;
                mauSo = -mauSo;
            }
        }

        void in() {
            cout <<tuSo << "/" << mauSo << endl;
        }
};

int main() {
    phanSo ps;
    ps.nhap();
    ps.toiGian();
    ps.in();
    return 0;
}