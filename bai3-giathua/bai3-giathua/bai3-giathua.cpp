#include<iostream>
#include <string>
long long giathua(long long n) {
	if (n == 1 || n == 0) {
		return 1;
	}
	else {
		return n * giathua(n - 1);
	}
}
using namespace std;
int main() {
	int n;
	cin >> n;
	cout << giathua(n);
	return 0;
}