#include<iostream>
using namespace std;
int main() {
	int n, k = 5;
	cin >> n;
	long long tong = 0;
	for (int i = 3; i < n; i = i + 3) {
		tong += i;
		if (k < n && k % 3 != 0){
			tong += k;
		}
		k += 5;
	}
	cout << tong;
	return 0;
}