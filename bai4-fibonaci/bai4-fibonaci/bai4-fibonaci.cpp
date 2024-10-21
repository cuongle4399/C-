#include<iostream>
#include<string>
using namespace std;
string phepCongChuoi(string A, string B) {
	string ketqua = "";
	int carry = 0;
	if (A.length() < B.length()) {
		swap(A, B);
	}
	while (A.length() > B.length()) {
		B = "0" + B;
	}
	for (int i = A.length() - 1; i >= 0; i--) {
		int u = A[i] - '0';
		int v = B[i] - '0';
		int result = u + v + carry;
		if (result > 9) {
			result = result % 10;
			carry = 1;
		}
		else {
			carry = 0;
		}
		ketqua = to_string(result) + ketqua;
	}
	if (carry) {
		ketqua = "1" + ketqua;
	}
	return ketqua;
}
string tinhFibonaci(int n) {
	string a = "0", b = "1";
	string c = "";
	if (n == 0) {
		return "0";
	}
	else if (n == 1 || n == 2) {
		return "1";
	}
	else {
		for (int i = 2; i <= n; i++) {
			c = phepCongChuoi(a, b);
			a = b;
			b = c;
		}
		return c;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n;
	cin >> n;
	cout << tinhFibonaci(n) << endl;
	return 0;
}
