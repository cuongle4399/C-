#include<iostream>
#include <string>
using namespace std;
int main() {
	long long n;
	int count = 0;
	long long x = 2;
	cin >> n;
	while (x < n) {
		count++;
		x = x * 2;
	}
	cout << count << endl;
	return 0;
}
