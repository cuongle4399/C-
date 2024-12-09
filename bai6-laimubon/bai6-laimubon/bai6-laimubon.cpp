#include<iostream>
#include<string>
using namespace std;
string phepCong(string a, string b) {
	if (a.length() > b.length()) {
		swap(a, b);
	}
	while (b.length() > a.length()) {
		a = "0" + a;
	}
	string result = "";
	int tong = 0;
	for (int i = a.length() - 1; i >= 0; i--) {
		tong = (a[i] - '0') + (b[i] - '0') + (tong / 10);
		result = to_string(tong % 10) + result;
	}
	if (tong / 10) {
		result = to_string(1) + result;
	}
	while (result.length() > 1 && result[0] == '0') {
		result.erase(0, 1);
	}
	return result;
}
string tinhMu(long long n, int x) {
	int k = 0;
	string A = to_string(n);
	string ketqua = "0";
	long long tich;
	string result = "";
	while (x - 1) {
		if (k != 0) {
			A = ketqua;
			ketqua = "0";
		}
		for (int i = A.length() - 1; i >= 0; i--) {
			tich = (A[i] - '0') * n;
			result = to_string(tich);
			int napso0 = A.length() - 1 - i;
			while (napso0 != 0) {
				napso0--;
				result = result + "0";
			}
			ketqua = phepCong(ketqua, result);
		}
		x--;
		k++;
	}
	return ketqua;
}
int main() {
	long long n;
	while (cin >> n) {
		if (n == 0) {
			return 0;
		}
		else {
			cout << tinhMu(n, 4) << endl;
		}
	}
	return 0;
}

