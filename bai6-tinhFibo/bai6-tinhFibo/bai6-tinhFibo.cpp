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
		if (tong > 0) {
			result = char(tong % 10 + '0') + result;
		}
		else {
			result = char(tong + '0') + result;
		}

	}
	if (tong / 10) {
		result = '1' + result;
	}
	return result;
}
string tinhFibo(int n) {
	string a = "0";
	string b = "1";
	if (n == 0) {
		return a;
	}
	else if (n == 1) {
		return b;
	}
	else {
		string c;
		for (int i = 2; i <= n; i++) {
			c = phepCong(a, b);
			a = b;
			b = c;
		}
		return c;
	}
}
int main() {
	int n;
	cin >> n;
	cout << tinhFibo(n);
	return 0;
}