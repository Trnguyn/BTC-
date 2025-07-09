#include <iostream>
using namespace std;
class phanSo {
	private:
		long tuSo;
		long mauSo;
		long GCD(long a, long b){
			while(b != 0){
				long temp = b;
				b = a % b;
				a = temp;
			}
			return a;
		}
	public:
		void nhap(){
			cin >> tuSo >> mauSo;
		}
		
		void rutgon(){
			long gcd = GCD(tuSo, mauSo);
			tuSo /= gcd;
			mauSo /= gcd;
			if(mauSo < 0){
				tuSo = -tuSo;
				mauSo = -mauSo;
			}
		}
		
		void in(){
			cout << tuSo << "/" << mauSo << endl;
		}
		
		friend phanSo tong(phanSo &a, phanSo &b);
};
phanSo tong(phanSo &a, phanSo &b){
	phanSo res;
	res.tuSo = a.tuSo * b.mauSo + b.tuSo * a.mauSo;
	res.mauSo = a.mauSo * b.mauSo;
	res.rutgon();
	return res;
}


int main(){
	phanSo p, q;
    p.nhap();
    q.nhap();
	phanSo result = tong(p, q);
    result.in();
	return 0;
}