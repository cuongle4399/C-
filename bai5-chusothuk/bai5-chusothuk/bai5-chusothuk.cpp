#include<iostream>
using namespace std;
int main() {
	int a, b, k, result = 0;
	cin >> a >> b >> k;
	int mob = a % b;
	for (int i = 0; i < k; i++) {
		mob *= 10;
		result = mob / b;
		mob = mob % b;
	}
	cout << result;
	return 0;
}
