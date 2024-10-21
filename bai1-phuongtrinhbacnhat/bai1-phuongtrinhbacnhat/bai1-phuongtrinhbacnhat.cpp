#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int a, b, c, x, y, z;
	cin >> a >> b >> c >> x >> y >> z;
	if (c == z) {
		if (b == y){
			if (a == x) {
				cout << 0;
			}
			else if (a > x) {
				cout << 2;
			}
			else {
				cout << 1;
			}
		}
		else if (b > y) {
			cout << 2;
		}
		else {
			cout << 1;
		}
	}
	else if (c > z) {
		cout << 2;
	}
	else {
		cout << 1;
	}
}