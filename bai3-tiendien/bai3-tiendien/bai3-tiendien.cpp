#include<iostream>
#include <string>
using namespace std;
int main() {
	int x, a, b, c, d;
	int tientra;
	cin >> x >> a >> b >> c >> d;
	if (x >= 0 && x <= 50) {
		tientra = x * a;
	}
	else if (x >= 51 && x <= 100) {
		tientra = a * 50 + (x - 50) * b;
	}
	else if (x >= 101 && x <= 150) {
		tientra = a * 50 + 50 * b + (x - 100) * c;
	}
	else if (x >= 151) {
		tientra = a * 50 + 50 * b + c * 50 + (x - 150) * d;
	}
	cout << tientra << endl;
	return 0;
}