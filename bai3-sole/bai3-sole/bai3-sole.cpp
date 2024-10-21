#include<iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n % 2 == 0) {
		n = n - 1;
	}
	for (int i = n; i >= 1; i = i - 2) {
		cout << i << " " << endl;
	}
	return 0;
}
