#include<iostream>
#include<cmath>
using namespace std;
int main() {
	long long n;
	int s = 0;
	cin >> n;
	while (n != 0) {
		s = s + (n % 10);
		n = n / 10;
	}
	cout << s;
	return 0;
}