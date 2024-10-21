#include<iostream>
#include <algorithm>
using namespace std;
int main() {
	int a, b;
	int c = 0, d=0;
	cin >> a >> b;
	c = a; d = b;
	for (int i = 2; i <= min(a, b); i++) {
		if (a % i == 0 && b % i == 0) {
			c = a / i;
			d = b / i;
		}
	}
	cout << c << " " << d << endl;
	return 0;
}
