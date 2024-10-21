#include<iostream>
using namespace std;
int main() {
	float a;
	cin >> a;
	if (a >= 9.0) {
		cout << "VERY GOOD";
	}
	else if (a >= 5.0 && a <= 8.9) {
		cout << "GOOD";
	}
	else {
		cout << "SAFE";
	}
	return 0;
}

