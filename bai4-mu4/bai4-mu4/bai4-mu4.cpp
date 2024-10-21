#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main() {
	int a, b, t;
	long long result = 0;
	cin >> a >> b;
	t = a + b;
	while (t > 0) {
		result = result * 10 + (t % 10);
		t = t / 10;
	}
	cout << result;
	return 0;
}